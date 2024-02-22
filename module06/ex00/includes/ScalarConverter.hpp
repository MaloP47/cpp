/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:41:28 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/22 16:59:59 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cctype>
# include <cstdlib>
# include <iomanip>
# include <limits>
# include <climits>

# define EXAMPLE "Program needs 1 argument only, example :\n\
./Scalar_types 42.42\n"

enum literalType {
	NONE,
    PSEUDO,
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INVALID 
} ;

class	ScalarConverter {

	public:

		static void	convert( const std::string & literal ) ;
		~ScalarConverter( void ) ;

	private:

		ScalarConverter( void ) ;
		ScalarConverter( ScalarConverter const & cpy ) ;
		ScalarConverter & operator=( ScalarConverter const & rhs ) ;

		static bool	isChar( const std::string & literal, char *c) ;
		static bool	isInt( const std::string & literal, int *n ) ;
		static bool	isFloat( const std::string & literal, float *f ) ;
		static bool	isDouble( const std::string & literal, double *d ) ;
		static bool	isPseudo( const std::string & literal, float *f, double * d ) ;

		static void	fromChar( char c ) ;
		static void	fromInt( int n ) ;
		static void	fromFloat( float f ) ;
		static void	fromDouble( double d ) ;
		static void fromPseudo( float * f, double * d ) ;

		static literalType	detemineType( const std::string & literal, char *c, int *n, float *f, double *d ) ;

} ;

/* *** SCALARCONVERTER.HPP *** */
