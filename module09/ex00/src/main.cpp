/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:31:44 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/08 22:02:04 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **av ) {

	if ( ac == 2 ) {
		try {
			std::string		input = av[1] ;
			BitcoinExchange	btc( input ) ;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl ;
		}
	}
	else {
		std::cout << "Error: could not open file." << std::endl ;
		return 1 ;
	}

	return 0 ;
}
