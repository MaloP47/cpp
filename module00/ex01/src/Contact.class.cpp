/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:51:49 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/18 20:27:56 by mpeulet          ###   ########.fr       */
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

bool	Contact::_setFirstname( std::string& firstname ) {
	
	bool	firstletter = false;
	
	if ( firstname.empty()) return (std::cout << ERR_BLANK << std::endl ), false ;
	else if (!_parse_name( firstname )) return ( std::cout << ERR_SETNAME_CHAR << std::endl ), false ;
	for ( std::string::iterator iter = firstname.begin(); iter != firstname.end(); ++iter ) {
		if ( std::isalpha( *iter ) && !firstletter ) {
			*iter = std::toupper( *iter );
			firstletter = true;
		}
		else
			*iter = std::tolower( *iter );
	} 
	_firstname = firstname;
	return ( std::cout << FIRST_N << _firstname << std::endl ) , true ;
}

bool	Contact::_setLasttname( std::string& lastname ) {

	bool	firstletter = false;
	
	if ( lastname.empty()) return (std::cout << ERR_BLANK << std::endl ), false ;
	else if (!_parse_name( lastname )) return ( std::cout << ERR_SETNAME_CHAR << std::endl ), false ;
	for (std::string::iterator iter = lastname.begin(); iter != lastname.end(); ++iter)
		*iter = std::toupper( *iter );
	_lastname = lastname;
	return ( std::cout << FIRST_N << _lastname << std::endl ) , true ;
}

bool	Contact::_setNickname( const std::string& nickname ) {
	if ( nickname.empty()) return (std::cout << ERR_BLANK << std::endl ), false ;
	else if (!_parse_name( nickname )) return ( std::cout << ERR_SETNAME_CHAR << std::endl ), false ;
	_nickname = nickname;
	return ( std::cout << NICK_N << _nickname << std::endl ) , true ;
}

bool	Contact::_setPhonenumber( const std::string& phonenumber ) {
	if ( phonenumber.empty()) return (std::cout << ERR_BLANK << std::endl ), false ;
	else if (!_parse_number( phonenumber )) return ( std::cout << ERR_NB << std::endl ), false ;
	_phonenumber = phonenumber;
	return ( std::cout << PHONE_N << _phonenumber << std::endl ) , true ;
}


bool	Contact::_setDarkestsecret( const std::string& darkestsecret ) {
	if ( darkestsecret.empty()) return (std::cout << ERR_BLANK << std::endl ), false ;
	else if (!_parse_name( darkestsecret )) return ( std::cout << ERR_SETNAME_CHAR << std::endl ), false ;
	_darkestsecret = darkestsecret;
	return ( std::cout << SECRET << _darkestsecret << std::endl ) , true ;
}

/* *** private functions *** */

bool	Contact::_is_valid_for_name( const char c ) {
	return std::isalpha(c) || c == ' ' || c == '-';
}

bool	Contact::_parse_name( const std::string& user_input ) {
	for (std::string::const_iterator iter = user_input.begin(); iter != user_input.end(); ++iter)
		if (!_is_valid_for_name( *iter )) return false ;
	return true ;
}

bool	Contact::_parse_number( const std::string& user_input ) {
	if (!std::isdigit(user_input[0]) || user_input[0] != '+') return false ;
	for (std::string::const_iterator iter = user_input.begin() + 1; iter != user_input.end(); ++iter)
		if (!std::isdigit( *iter )) return false ;
	return true ;
}

/* *** static initilizations *** */

int		Contact::_nbInstContact = 0;
