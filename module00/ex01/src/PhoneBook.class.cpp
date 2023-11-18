/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:52:29 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/18 20:57:45 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

/* *** constructor *** */

PhoneBook::PhoneBook( void ) : _index(-1) {
	return ;
}

/* *** destructor *** */

PhoneBook::~PhoneBook( void ) {
	return ;
}

/* *** public functions *** */

bool	PhoneBook::functionalities( std::string user_input ) {
	
	std::string	functionnality[3] = { "ADD", "EXIT", "SEARCH" };
	int			index = -1;
	int			array_size = sizeof( functionnality ) / sizeof( functionnality[0] );

	for ( int i = 0; i < array_size; i++ ) {
		if ( !functionnality[i].compare( user_input ) ) {
			index = i;
			break ;
		}
	}
	switch (index)
	{
		case 0:
			std::cout << "ADD fn" << std::endl;
			return ( true );
		case 1:
			std::cout << EXIT_INPUT << std::endl;
			return ( false );
		case 2:
			std::cout << "SEARCH fn" << std::endl;
			return ( true );
		default:
			std::cout << INVALID_INPUT << std::endl;
			return ( true );
	}
}
