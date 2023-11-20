/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:52:29 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/20 22:51:49 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

/* *** constructor *** */

PhoneBook::PhoneBook( void ) : _index( 0 ) {
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
			this->_addContact();
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

/* *** private functions *** */

void	PhoneBook::_addContact( void ) {
	
	std::string		user_input;

	if (_index > 7) _index = 0;
	
	while (!_contact[_index]._setFirstname( user_input )) {
		std::cout << ADD_FN << std::endl;
		std::getline( std::cin, user_input );
	}
	user_input.clear();
	while (!_contact[_index]._setLasttname( user_input )) {
		std::cout << "last name" << std::endl;
		std::getline( std::cin, user_input);
	}
	user_input.clear();
	while (!_contact[_index]._setNickname( user_input )) {
		std::cout << "nickname" << std::endl;
		std::getline( std::cin, user_input );
	}
	user_input.clear();
	while (!_contact[_index]._setPhonenumber( user_input )) {
		std::cout << "phonenumber" << std::endl;
		std::getline( std::cin, user_input );
	}
	user_input.clear();
	while (!_contact[_index]._setDarkestsecret( user_input )) {
		std::cout << "Secret" << std::endl;
		std::getline( std::cin, user_input );
	}
	_index++;	 
}
