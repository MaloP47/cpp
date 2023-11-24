/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:39:34 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/24 15:17:43 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* *** constructor *** */

Zombie::Zombie( void ) {
	return ;	
}

/* *** destructor *** */

Zombie::~Zombie( void ) {
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

/* *** private functions *** */

