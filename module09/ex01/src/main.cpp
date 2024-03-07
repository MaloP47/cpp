/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:27:00 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/07 12:10:21 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main( int ac, char **av ) {

	if ( ac == 2 ) {
		try {
			std::string	input = av[1] ;
			RPN			operation( input ) ;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl ;
			exit( 1 ) ;
		}
	}
	else {
		std::cout << "Error: One argument needed.\n"
		<< "Example : ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" << std::endl ;
		return 1 ;
	}

	return 0 ;
}
