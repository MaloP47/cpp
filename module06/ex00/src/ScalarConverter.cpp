/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:40:46 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/21 13:38:13 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* *** public functions *** */

ScalarConverter::~ScalarConverter( void ) {}

void	ScalarConverter::convert( const std::string & literal ) {
	std::cout << literal << std::endl ;
}

/* *** private functions *** */

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( ScalarConverter const & cpy ) {
	static_cast<void>( cpy );
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const & rhs ) {
	static_cast<void>( rhs );
	return *this ;
}

bool	ScalarConverter::isChar( const std::string & literal ) {
	return literal.size() == 1 && isprint( literal ) ;
}

bool	ScalarConverter::isInt( const std::string & literal ) {
	
}

bool	ScalarConverter::isFloat( const std::string & literal ) {
	
}

bool	ScalarConverter::isDouble( const std::string & literal ) {
	
}

bool	ScalarConverter::isPseudoLiteral( const std::string & literal ) {
	return ( literal == "-inff" || literal == "+inff" || literal == "nanf"
		|| literal == "-inf" || literal == "+inf" || literal == "nan") ;
}

void	ScalarConverter::charToElse( char c ) const {
	
}

void	ScalarConverter::intToElse( int n ) const {
	
}

void	ScalarConverter::floatToElse( float f ) const {
	
}

void	ScalarConverter::doubleToElse( double d ) const {
	
}

void *	ScalarConverter::stringToCast( const std::string & literal ) {
	
}
