/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:01:33 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/26 12:46:44 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* *** constructor *** */

Weapon::Weapon( std::string type ) : _type( type ) {
	return ;
}

/* *** destructor *** */

Weapon::~Weapon( void ) {
	return ;
}

/* *** public functions *** */

/* GETTERS */

const std::string	&Weapon::getType( void ) const {
	return _type;
}

/* SETTERS */

void	Weapon::setType( const std::string& type ) {
	_type = type;
}

/* *** private functions *** */
