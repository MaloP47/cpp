/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:51:28 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/28 17:59:50 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <csignal>
#include "Harl.hpp"


void	signalHandler( int signum ) {
	std::exit( signum );
}

int	main( void ) {

	Harl			HarlComplain;
	std::string		userInput;

	std::signal( SIGINT, signalHandler );

	while (std::getline( std::cin, userInput) ) {
		HarlComplain.complain( userInput );
	}
	return 0;
}