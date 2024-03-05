/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:58:09 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/05 11:51:58 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* *** constructors *** */

BitcoinExchange::BitcoinExchange( std::string & input ) : _input( input ) {
	if ( !isExtensionValid( _input, ".txt" ) ) 
		throw std::runtime_error( "Wrong input extension" ) ;
	initDataBase() ;
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
		_input = rhs._input ;
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

	memset( &date, 0, sizeof( tm ) ) ;
	res = strptime( line.c_str(), "%Y-%m-%d", &date ) ;
	if ( res == NULL || *res != 0 )
		throw std::runtime_error( "Failed conversion from string to tm, check format" ) ;
	if ( !isDateValid( date ) ) 
		throw std::runtime_error( "A date is invalid" ) ;
	return date ;
} 

void	BitcoinExchange::parseLine( std::string & line, char delim, bool option ) {
	std::istringstream	iss( line ) ;
	std::string			date ;
	std::string			value ;
	double				price ;
	char				*end ;

	if ( !line.find( delim ) )
		throw std::runtime_error( "Invalid format, couldn't find delimiter." ) ;
	getline( iss, date, delim ) ;
	getline( iss, value ) ;
	price = std::strtod( value.c_str(), &end ) ;
	if ( price == -0 || price == -0.0 || price == -0.00 )
		price = 0 ;
	if ( !end || *end != 0 || price < 0 || price > 2147483647.00 )
		throw std::runtime_error( "Value is not valid." ) ;
	if ( option ) {
		_data.insert( std::pair<tm, double>( lineToTm( date ), price ) ) ;
		return ;
	}
	if ( price > 1000 ) {
		std::cout << "Error: too large a number." << std::endl ;
		return ;
	}
}

void	BitcoinExchange::initDataBase( void ) {
	std::string		data = "data/testdata.csv" ;
	if ( !isExtensionValid( data, ".csv" ) )
		throw std::runtime_error( "Wrong data file extension" ) ;
	std::ifstream	dataFile( "data/testdata.csv" ) ;
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

void	BitcoinExchange::convertBitcoinPrice( void ) {
	std::ifstream	inputFile( _input ) ;
	std::string		inputLine ;

	if ( !inputFile.is_open() )
		throw std::runtime_error( "Can't open input file." ) ;
	getline( inputFile, inputLine ) ;
	if ( inputLine != "date | value" )
		throw std::runtime_error( "Wrong file header for input." ) ;
}

/* *** other *** */

bool	tm_sort::operator()( tm const & lhs, tm const & rhs ) const {
	if ( lhs.tm_year != rhs.tm_year )
		return  lhs.tm_year < rhs.tm_year ;
	if ( lhs.tm_mon != rhs.tm_mon )
		return lhs.tm_mon < rhs.tm_mon ;
	return lhs.tm_mday < rhs.tm_mday ;
}
