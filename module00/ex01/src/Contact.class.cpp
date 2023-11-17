/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:51:49 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/17 11:30:34 by mpeulet          ###   ########.fr       */
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

int		Contact::getNbInstContact( void ) {
	return Contact::_nbInstContact;
}

int		Contact::_nbInstContact = 0;
