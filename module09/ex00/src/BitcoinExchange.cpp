/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:58:09 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/06 12:05:54 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* *** constructors *** */

BitcoinExchange::BitcoinExchange( std::string & input ) : _inputFile( input ) {
	if ( !isExtensionValid( _inputFile, ".txt" ) ) 
		throw std::runtime_error( "Wrong input extension." ) ;
	initDataBase() ;
	initInputFile() ;
}

BitcoinExchange::BitcoinExchange( void ) {}

/* *** copy constructor *** */

BitcoinExchange::BitcoinExchange( BitcoinExchange const & cpy ) { *this = cpy ; }

/* *** destructor *** */

BitcoinExchange::~BitcoinExchange( void ) {}

/* *** operator = *** */

BitcoinExchange &	BitcoinExchange::operator=( BitcoinExchange const & rhs ) {
	if ( this != &rhs ) {
		_data = rhs._data ;
		_inputFile = rhs._inputFile ;
	}
	return *this ;
}

/* *** public functions *** */

std::map< tm, double, tm_sort > const & BitcoinExchange::getData( void ) const { return _data ; }

/* *** private functions *** */

bool	BitcoinExchange::isExtensionValid( std::string const & file, std::string const & ext ) {
	if ( file.length() >= ext.length() )
		return file.substr( file.length() - ext.length() ) == ext ;
	return false ;
}

bool	BitcoinExchange::isDateValid( tm const & date ) {
	tm	compare = date ;

	mktime( &compare ) ;
	if ( compare.tm_year != date.tm_year
			|| compare.tm_mon != date.tm_mon
			|| compare.tm_mday != date.tm_mday )
				return false ;
	if ( compare.tm_year < 109 )
		return false ;
	if ( ( compare.tm_year > 122 )
			|| ( compare.tm_year == 122 && compare.tm_mon > 3 )
			|| ( compare.tm_year == 122 && compare.tm_mon > 3
					 && compare.tm_mday > 1 ) ) 
					 	return false ;
	return true ;
}

tm	BitcoinExchange::lineToTm( std::string const & line ) {
	static tm	date ;
 	char		*res ;
	size_t		endpos = line.find_last_not_of( " \t\r\n\v\f" ) ;
	std::string	trimIsspace;

	if ( endpos != std::string::npos ) {
		trimIsspace = line.substr( 0, endpos + 1 ) ;
		memset( &date, 0, sizeof( tm ) ) ;
		res = strptime( trimIsspace.c_str(), "%Y-%m-%d", &date ) ;
	}
	else
		throw std::runtime_error( "Line contains only whitespace or is empty" );
	if ( res == NULL || *res != 0 ) {
		std::cout << line << std::endl ;
		throw std::runtime_error( "Failed conversion from string to tm, check format " ) ;
	}
	if ( !isDateValid( date ) ) 
		throw std::runtime_error( "A date is invalid" ) ;
	return date ;
} 

void	BitcoinExchange::parseLine( std::string const & line, char delim, bool option ) {
	std::istringstream	iss( line ) ;
	std::string			date ;
	std::string			value ;
	double				price ;
	char				*end ;

	if ( !line.find( delim ) && option )
		throw std::runtime_error( "Invalid format, couldn't find delimiter." ) ;
	getline(iss, date, delim) ;
	getline(iss, value) ;
	price = std::strtod( value.c_str(), &end );
	if (option && ( !end || *end != 0 || price < 0 ) )
		throw std::runtime_error( "Value is not valid." ) ;
	if ( price == -0 || price == -0.0 || price == -0.00 )
		price = 0;
	if ( option ) {
		_data.insert(std::pair<tm, double>( lineToTm( date ), price ) ) ;
		return;
	}
}

void	BitcoinExchange::parseLineInput( std::string const & line ) {
	std::istringstream	iss( line ) ;
	std::string			date ;
	std::string			value ;
	double				price ;
	char				*end ;
	tm					dateInput ;

	if ( line.find( "|" ) == std::string::npos ) {
		std::cout << "Error: bad input => " << line << std::endl ;
		return ;
	}
	getline(iss, date, '|') ;
	getline(iss, value) ;
	dateInput = lineToTm( date ) ;
	price = std::strtod( value.c_str(), &end );
	if ( !end || *end != 0 )
		throw std::runtime_error( "Value is not valid." ) ;
	if ( price < 0 ) {
		std::cout << "Error: not a positive number." << std::endl ;
		return ;
	}
	if ( price > 1000 ) {
		std::cout << "Error: too large a number." << std::endl ;
		return ;
	}
	std::map<tm, double>::const_iterator it = findClosestKey( dateInput ) ;
	double total = it->second  * price ;
	std::cout << date << "=> " << value << " = " ;
	const double EPSILON = 0.01 ;
	if ( std::fabs( total - static_cast< int >( total ) ) > EPSILON )
		std::cout << total << std::endl ;
	else
		std::cout << std::fixed << std::setprecision( 2 ) << total << std::endl ;
}

std::map< tm, double, tm_sort >::const_iterator	BitcoinExchange::findClosestKey( tm & date ) {
	std::map< tm, double, tm_sort >::const_iterator	it = _data.lower_bound( date ) ;
	std::map< tm, double, tm_sort >::const_iterator	find = _data.find( date ) ;
	if ( find != _data.end() )
		return find ;
	if ( it == _data.begin() )
		return it ;
	else if ( it == _data.end() )
		return --it ;
	else {
		std::map< tm, double, tm_sort >::const_iterator	previous = it ;
		--previous ;
		tm	prevDate = previous->first ;
		tm	itDate = it->first ;
		if ( fabs( difftime( mktime( &date ), mktime( &prevDate ) ) )
			> fabs( difftime( mktime( &date ), mktime( &itDate ) ) ) ) 
				return previous ;
	}
	return it ;
}

void	BitcoinExchange::initDataBase( void ) { 
	std::string		data = "data/data.csv" ;
	if ( !isExtensionValid( data, ".csv" ) )
		throw std::runtime_error( "Wrong data file extension" ) ;
	std::ifstream	dataFile( "data/data.csv" ) ;
	std::string		line ;

	if ( !dataFile.is_open() ) 
		throw std::runtime_error( "Can't open data file." ) ;
	getline( dataFile, line ) ;
	if ( line != "date,exchange_rate" )
		throw std::runtime_error( "Wrong file header for data." ) ;
	while ( getline( dataFile, line ) ) {
		if ( line.size() == 0 || line == "\n" )
			continue ;
		parseLine( line, ',', true ) ;
	}
	dataFile.close() ;
}

void	BitcoinExchange::initInputFile( void ) {
	std::ifstream	inputFile( _inputFile.c_str() ) ;
	std::string		inputLine ;

	if ( !inputFile.is_open() )
		throw std::runtime_error( "Can't open input file." ) ;
	getline( inputFile, inputLine ) ;
	if ( inputLine != "date | value" )
		throw std::runtime_error( "Wrong file header for input." ) ;
	while ( getline( inputFile, inputLine ) ) {
		if ( inputLine.size() == 0 || inputLine == "\n" )
			continue ;
		parseLineInput( inputLine ) ;
	}
	inputFile.close() ;
}

/* *** other *** */

bool	tm_sort::operator()( tm const & lhs, tm const & rhs ) const {
	if ( lhs.tm_year != rhs.tm_year )
		return  lhs.tm_year < rhs.tm_year ;
	if ( lhs.tm_mon != rhs.tm_mon )
		return lhs.tm_mon < rhs.tm_mon ;
	return lhs.tm_mday < rhs.tm_mday ;
}
