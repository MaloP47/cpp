/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:31:44 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/04 15:14:10 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **av ) {

	if ( ac == 2 ) {
		try {
			tm	date ;
			date.tm_year = 111 ;
			date.tm_mon = 11 ;
			date.tm_mday = 11 ;
			memset( &date.tm_hour, 0, sizeof( date.tm_hour ) ) ;
			std::string		input = av[1] ;
			BitcoinExchange	btc( input ) ;
			const std::map<tm, double, tm_sort>& data = btc.getData();
			int	count = 0 ;
			for (std::map<tm, double, tm_sort>::const_iterator it = data.begin(); it != data.end() && count < 10; ++it, ++count) {
				// Formate et affiche la date
        		char dateStr[100];
        		strftime(dateStr, sizeof(dateStr), "%Y-%m-%d", &(it->first));
        		std::cout << "La date est : " << dateStr;

        		// Affiche la valeur associée
        		std::cout << " et la valeur est : " << std::fixed << std::setprecision(2) << it->second << std::endl;
    		}

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
