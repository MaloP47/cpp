/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:02:42 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/26 15:16:00 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* *** constructor *** */

HumanB::HumanB( const std::string& name ) : _name( name ) {
	_weapon = new Weapon("bare hands");
	return ;
}

/* *** destructor *** */

HumanB::~HumanB( void ) {
	delete _weapon;
	return ;
}

/* *** public functions *** */

void	HumanB::attack( void ) const {
	std::cout << getName() << ATTACK << _weapon->getType() << std::endl;
	return ;
}

/* GETTERS */

const std::string	&HumanB::getName( void ) const {
	return _name ;
}

/* SETTERS */

void	HumanB::setName( const std::string& name) {
	_name =name;
}

void	HumanB::setWeapon( Weapon& newWeapon ) {
	_weapon = &newWeapon;
}

/* *** private functions *** */
