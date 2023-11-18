/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:51:49 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/18 17:12:21 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

/* *** constructor *** */

Contact::Contact(void) {
	
	Contact::_nbInstContact += 1;
	return ;
}

/* *** destructor *** */

Contact::~Contact(void) {
	return ;
}

/* *** public functions *** */

/* GETTERS */

int		Contact::getNbInstContact( void ) {
	return Contact::_nbInstContact;
}

std::string Contact::getFirstname( void ) const {
    return _firstname;
}

std::string Contact::getLastname( void ) const {
	return _lastname;
}

std::string Contact::getNickname( void ) const {
	return _nickname;
}

std::string Contact::getPhonenumber( void ) const {
	return _phonenumber;
}

std::string Contact::getDarkestsecret( void ) const {
	return _darkestsecret;
}

/* SETTERS */

/* *** private functions *** */

bool	Contact::_is_valid_for_name( const char c) {
	return std::isalpha(c) || c == ' ' || c == '-';
}

bool	Contact::_parse_name( const std::string& user_input ) {
	for (std::string::const_iterator iter = user_input.begin(); iter != user_input.end(); ++iter)
		if (!_is_valid_for_name( *iter )) return false ;
	return true ;
}

bool	_parse_number( const std::string& user_input ) {
	if (!std::isdigit(user_input[0]) || user_input[0] != '+') return false ;
	for (std::string::const_iterator iter = user_input.begin() + 1; iter != user_input.end(); ++iter)
		if (!std::isdigit( *iter )) return false ;
	return true ;
}

/* *** static initilizations *** */

int		Contact::_nbInstContact = 0;
