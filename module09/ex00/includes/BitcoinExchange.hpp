/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:37:27 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/05 15:43:48 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>
# include <exception>
# include <iomanip>

# include <ctime>
# include <cstdlib>
# include <cstring>
# include <cmath>

struct tm_sort {

	bool	operator()( tm const & lhs, tm const & rhs ) const ;
	
} ;

class	BitcoinExchange {

	public:

		BitcoinExchange( std::string & input ) ;
		~BitcoinExchange( void ) ;

		std::map< tm, double, tm_sort > const & getData( void ) const ;

	private:

		BitcoinExchange( void ) ;
		BitcoinExchange( BitcoinExchange const & cpy ) ;
		BitcoinExchange &	operator=( BitcoinExchange const & rhs ) ;
		
		std::map< tm, double, tm_sort >	_data ;
		std::string						_inputFile ;

		bool		isExtensionValid( std::string const & file, std::string const & ext ) ;
		void		initInputFile( void ) ;
		static bool	isDateValid( tm const & date ) ;
		static tm	lineToTm( std::string const & line ) ;
		void		parseLine( std::string & line, char delim, bool option ) ;
		void		initDataBase( void ) ;
} ;

/* *** BITCOINEXCHANGE.HPP *** */
