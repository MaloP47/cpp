/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:40:35 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/15 10:47:35 by mpeulet          ###   ########.fr       */
/*                                                                             */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <csignal>

#include "PhoneBook.class.hpp"

void	signalHandler( int signum ) {
	std::exit(signum);
}

int	main(void)
{
	bool		program_runs = true;
	std::string user_input;
	PhoneBook	phone_book;

	std::signal(SIGINT, signalHandler);
	for (; program_runs && std::getline( std::cin, user_input ) ;)
		program_runs = phone_book.functions( user_input );
	return (0);
}
