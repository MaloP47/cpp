/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:51:49 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/18 12:40:13 by mpeulet          ###   ########.fr       */
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

/* *** static initilizations *** */

int		Contact::_nbInstContact = 0;
