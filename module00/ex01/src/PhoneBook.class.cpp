/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:52:29 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/23 13:24:19 by mpeulet          ###   ########.fr       */
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
	switch (index) {
		case 0:
			_addContact();
			return ( true );
		case 1:
			std::cout << EXIT_INPUT << std::endl;
			return ( false );
		case 2:
			_searchContact();
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
	std::cout << "New contact : " << _index + 1 << "/8\n" << std::endl;
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

std::string	PhoneBook::_trimLength( const std::string& detail) {
	if (detail.length() > 10) return detail.substr(0, 9) + "." ;
	return detail ;
}

bool	PhoneBook::_displaySnipContact( int nb ) {
	if (_contact[nb].contactEmpty()) return false ;
	std::cout << "|" << std::setfill('*') << std::setw(10) << nb + 1	;
	std::cout << "|" << std::setfill('*') << std::setw(10) << _trimLength(_contact[nb].getFirstname());
	std::cout << "|" << std::setfill('*') << std::setw(10) << _trimLength(_contact[nb].getLastname());
	std::cout << "|" << std::setfill('*') << std::setw(10) << _trimLength(_contact[nb].getNickname()) << "|" << std::endl;
	return true ;
}

void	PhoneBook::_indexMenu ( void ) {
	std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::endl; 
	std::cout << "|" << std::setfill('*') << std::setw(10) << "INDEX";
	std::cout << "|" << std::setfill('*') << std::setw(10) << "FIRSTNAME";
	std::cout << "|" << std::setfill('*') << std::setw(10) << "LASTNAME";
	std::cout << "|" << std::setfill('*') << std::setw(10) << "NICKNAME" << "|" << std::endl;;
	std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::endl; 
}

bool	PhoneBook::_isIndexValid( const std::string& input ) {
	
		std::stringstream	atoi_str( input );
		int					int_compare;

		atoi_str >> int_compare;
		if (int_compare )
}

bool	PhoneBook::_searchContact( void ) {

	std::string			input;

	std::cout << "**** SEARCH mode : ****\n" << std::endl;
		
	if (_index == -1) return (std::cout << "Phone book is empty, please add a contact first!" << std::endl), false ;
	_indexMenu();
	for (int idx = 0; idx <= 7 && (this -> _displaySnipContact(idx) == true); ++idx);
	std::cout << "|" << std::setfill('-') << std::setw(44) << "|\n" << std::endl;

	return true ;
}
