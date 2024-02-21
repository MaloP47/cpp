/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:40:46 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/21 16:29:24 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* *** private functions *** */

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( ScalarConverter const & cpy ) {
	static_cast<void>( cpy );
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const & rhs ) {
	static_cast<void>( rhs );
	return *this ;
}

bool	ScalarConverter::isChar( const std::string & literal, char *c) {
	if ( literal.size() ==  3 && literal[0] == 39 && literal[2] == 39 ) {
		*c = static_cast<char>( literal[1] );
		return true ;
	}
	else if ( literal.size() == 1 ) {
		*c = static_cast<char>( literal[0] );
		return true ;
	}
	return false ;
}

void	ScalarConverter::fromChar( char c ) {
	if ( !isprint( c ) ) {
		std::cout << "char c: Non displayable\n"
					<< "int: " << static_cast<int>( c ) << "\n"
					<< "float: " << static_cast<float>( c ) << "\n"
					<< "double: " << static_cast<double>( c ) << "\n" ;
	}
	else
		std::cout << "char c: " << c << "\n"
					<< "int: " << static_cast<int>( c ) << "\n"
					<< "float: " << static_cast<float>( c ) << "\n"
					<< "double: " << static_cast<double>( c ) << "\n" ;
}

// bool	ScalarConverter::isInt( const std::string & literal, int *n ) {
	
// }

// bool	ScalarConverter::isFloat( const std::string & literal, float *n ) {
	
// }

/* *** public functions *** */

ScalarConverter::~ScalarConverter( void ) {}

void	ScalarConverter::convert( const std::string & literal ) {
	char	c ;
	// int		n ;
	// float	f ;
	// double	d ;
	if ( isChar( literal, &c ) ) {
		fromChar( c ) ;
		return ;
	}
}
