/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:26:32 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/08 17:32:25 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int ac, char **av ) {

	clock_t	start = clock() ;

	if ( ac > 2 ) {
		try {
			PmergeMe	sort( av ) ;;
			double	time = double( clock() - start ) / double( CLOCKS_PER_SEC ) ;
			std::cout << "\033[0;90m"
				<< "------------------------------------------------------------------------"
				<< std::endl ;
			std::cout << std::fixed << std::setprecision( 5 )
				<< "\t\t\t***total time***\t\t    : " << time << " sec." << std::endl ;
			std::cout << "------------------------------------------------------------------------"
				<< "\033[0;39m"	<< std::endl ;
			return 0 ;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl ;
			exit( 1 ) ;
		}
	}
	else
		std::cout << "Error: Add at least 2 unsorted positive integers.\n"
					<< "Example: ./PmergeMe 3 5 9 7 4" << std::endl ;
	return 1 ;
}
