/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:58:09 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/04 15:43:05 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* *** constructors *** */

BitcoinExchange::BitcoinExchange( std::string & input ) : _input( input ) {
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

tm	BitcoinExchange::lineToTm( std::string const & line ) {
	static tm	date ;
	memset( &date, 0, sizeof( tm ) ) ;
 	char		*res ;

	res = strptime( line.c_str(), "%Y-%m-%d", &date ) ;
	if ( res == NULL || *res != 0 )
		throw std::runtime_error( "Failed conversion from string to tm" ) ;
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
	if ( !end || *end != 0 || price < 0 || static_cast<int>( price ) > INT_MAX )
		throw std::runtime_error( "Value is not valid." ) ;
	if ( option )
		_data.insert( std::pair<tm, double>( lineToTm( date ), price ) ) ;
}

void	BitcoinExchange::initDataBase( void ) {
	std::ifstream	dataFile( "data/data.csv" ) ;
	std::string		line ;

	if ( !dataFile.is_open() ) 
		throw std::runtime_error( "Can't open data file " ) ;
	getline( dataFile, line ) ;
	if ( line != "date,exchange_rate" )
		throw std::runtime_error( "Wrong file header" ) ;
	while ( getline( dataFile, line ) ) {
		parseLine( line, ',', true ) ;
	}
	dataFile.close() ;
}

/* *** other *** */

bool	tm_sort::operator()( tm const & lhs, tm const & rhs ) const {
	if ( lhs.tm_year != rhs.tm_year )
		return  lhs.tm_year < rhs.tm_year ;
	if ( lhs.tm_mon != rhs.tm_mon )
		return lhs.tm_mon < rhs.tm_mon ;
	return lhs.tm_mday < rhs.tm_mday ;
}
