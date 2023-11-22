/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:52:29 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/22 11:28:25 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

/* *** constructor *** */

PhoneBook::PhoneBook( void ) : _index( -1 ) {
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
			_addContact();
			return ( true );
		case 1:
			std::cout << EXIT_INPUT << std::endl;
			return ( false );
		case 2:
			// _searchContact(&_index);
			_displaySnipContact( _index );
			return ( true );
		default:
			std::cout << INVALID_INPUT << std::endl;
			return ( true );
	}
}

/* *** private functions *** */

bool	PhoneBook::_addContact( void ) {
	
	std::string		user_input;

	_index++;
	if (_index > 7) _index = 0;
	std::cout << "**** ADD mode : ****\n" << std::endl;
	std::cout << ERR_BLANK << std::endl;
	while (!_contact[_index].setFirstname( user_input )) {
		if (std::cin.eof()) {
			return false ;
		}
		std::cout << ADD_FN << std::endl;
		std::getline( std::cin, user_input );
	}
	user_input.clear();
	while (!_contact[_index].setLastname( user_input )) {
		if (std::cin.eof()) {
			return false ;
		}
		std::cout << ADD_LN << std::endl;
		std::getline( std::cin, user_input);
	}
	user_input.clear();
	while (!_contact[_index].setNickname( user_input )) {
		if (std::cin.eof()) {
			return false ;
		}
		std::cout << ADD_NN << std::endl;
		std::getline( std::cin, user_input );
	}
	user_input.clear();
	while (!_contact[_index].setPhonenumber( user_input )) {
		if (std::cin.eof()) {
			return false ;
		}
		std::cout << ADD_PN << std::endl;
		std::getline( std::cin, user_input );
	}
	user_input.clear();
	while (!_contact[_index].setDarkestsecret( user_input )) {
		if (std::cin.eof()) {
			return false ;
		}
		std::cout << ADD_DS << std::endl;
		std::getline( std::cin, user_input );
	}
	std::cout << "**** Contact saved ****\n" << std::endl;
	return true ;
}

void	PhoneBook::_displaySnipContact( int nb ) {
	
	std::cout << "|" << std::setfill('*') << std::setw(10) << nb + 1	;
	std::cout << "|" << std::setfill('*') << std::setw(10) << _contact[nb].getFirstname();
	std::cout << "|" << std::setfill('*') << std::setw(10) << _contact[nb].getLastname();
	std::cout << "|" << std::setfill('*') << std::setw(10) << _contact[nb].getNickname();
	std::cout << "|" << std::setfill('*') << std::setw(10) << _contact[nb].getPhonenumber();
	std::cout << "|" << std::setfill('*') << std::setw(10) << _contact[nb].getDarkestsecret() << "|" << std::endl;
}

/*bool	PhoneBook::_searchContact( int *nb ) {

	std::cout << "**** SEARCH mode : ****\n" << std::endl;
		
	if (_index < 0) return (std::cout << "Phone book is empty, please add a contact first!" << std::endl) false ;
	for (int idx = _index; idx > 0; --idx)
	if (!_contact[_index].displayFullContact(nb)) std::cout << "error" << std::endl;
}*/
