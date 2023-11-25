/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:39:34 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 16:01:52 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* *** constructors *** */

Zombie::Zombie( void ) {
	return ;
}

Zombie::Zombie( std::string name ) : _name( name ) {
	return ;	
}

/* *** destructor *** */

Zombie::~Zombie( void ) {
	std::cout << "(destructor called) " << getZombieName() << ZOMBIE_DIED << std::endl;
	return ;	
}

/* *** public functions *** */

void	Zombie::announce( void ) {
	std::cout << getZombieName() << ZOMBIE_ANNONCE << std::endl;
	return ;
}

/* GETTERS */

std::string	Zombie::getZombieName( void ) const {
	return _name ;
}

/* SETTERS */

void	Zombie::setName( const std::string& name ) {
	_name = name;
}
