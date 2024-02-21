/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:41:28 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/20 18:15:55 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cctype>

# define EXAMPLE "Program needs 1 argument only, example :\n\
./Scalar_types 42.42\n"

class	ScalarConverter {

	public:

		static void	convert( const std::string & literal ) ;
		~ScalarConverter( void ) ;

	private:

		ScalarConverter( void ) ;
		ScalarConverter( ScalarConverter const & cpy ) ;
		ScalarConverter & operator=( ScalarConverter const & rhs ) ;
		
		bool	isChar( const std::string & literal ) ;
		bool	isInt( const std::string & literal ) ;
		bool	isFloat( const std::string & literal ) ;
		bool	isDouble( const std::string & literal ) ;
		bool	isPseudoLiteral( const std::string & literal ) ;
		
		void	charToElse( char c ) const ;
		void	intToElse( int n ) const ;
		void	floatToElse( float f ) const ;
		void	doubleToElse( double d ) const ;

		void *	stringToCast( const std::string & literal ) ;
} ;

/* *** SCALARCONVERTER.HPP *** */
