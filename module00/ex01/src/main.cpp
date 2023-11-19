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

#define CTRL_C " Program quit because of user : ctrl c!"
#define CTRL_D "Program quit because of user : ctrl d!"

void	signalHandler( int signum ) {
	std::cout << CTRL_C << std::endl;
	std::exit(signum);
}

int	main(void)
{
	bool		program_runs = true;
	std::string user_input;
	PhoneBook	phone_book;

	std::signal(SIGINT, signalHandler);
	for (; program_runs && std::getline( std::cin, user_input ) ;)
		program_runs = phone_book.functionalities( user_input );
	if (std::cin.eof())
    	std::cout << CTRL_D << std::endl;
	return (0);
}

