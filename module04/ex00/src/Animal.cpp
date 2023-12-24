/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:29:03 by root              #+#    #+#             */
/*   Updated: 2023/12/24 12:51:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* *** constructor *** */

Animal::Animal( void ) : type( RAND ) {
	std::cout << DEF ;
}

/* *** copy constructor *** */

Animal::Animal( Animal const & cpy ) {
	std::cout << ANIMAL_CPY ;
	*this = cpy ;
}

/* *** destructor *** */

Animal::~Animal( void ) {
	std::cout << DEST ;
}

/* *** operator = *** */

Animal &	Animal::operator=( Animal const & rhs ) {
	if ( this != &rhs ) {
		type = rhs.getType() ;
	}
	return *this ;
}

/* *** public functions *** */

/* GETTER */

const std::string &	Animal::getType( void ) const {
	return type ;
}

/* SETTER */

bool	Animal::setType( const std::string & set ) {
	type = set ;
	return true ;
}

void	Animal::makeSound( void ) const {
	std::cout << getType() << R_SOUND ;
}

/* *** protected functions *** */
/* *** private functions *** */
/* *** other *** */
