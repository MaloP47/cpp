/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:02:17 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/26 14:40:43 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* *** constructor *** */

HumanA::HumanA( const std::string& name, const Weapon& type ) : _name( name ), _weapon( type ) {
	return ;
}

/* *** destructor *** */

HumanA::~HumanA( void ) {
	return ;
}
/* *** public functions *** */

void	HumanA::attack( void ) const {
	std::cout << getName() << ATTACK << _weapon.getType() << std::endl;
	return ;
}

/* GETTERS */

const std::string	&HumanA::getName( void ) const {
	return _name ;
}

/* SETTERS */

void	HumanA::setName( const std::string& name ) {
	_name = name;
}

/* *** private functions *** */
