/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:46:53 by root              #+#    #+#             */
/*   Updated: 2023/12/26 13:47:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* *** constructor *** */

WrongAnimal::WrongAnimal( void ) : type( RAND_WA ) {
	std::cout << DEF_WA ;
}

/* *** copy constructor *** */

WrongAnimal::WrongAnimal( WrongAnimal const & cpy ) {
	std::cout << ANIMAL_CPY_WA ;
	*this = cpy ;
}

/* *** destructor *** */

WrongAnimal::~WrongAnimal( void ) {
	std::cout << DEST_WA ;
}

/* *** operator = *** */

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs ) {
	if ( this != &rhs ) {
		type = rhs.getType() ;
	}
	return *this ;
}

/* *** public functions *** */

/* GETTER */

const std::string &	WrongAnimal::getType( void ) const {
	return type ;
}

/* SETTER */

bool	WrongAnimal::setType( const std::string & set ) {
	type = set ;
	return true ;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << getType() << R_SOUND_WA ;
}

/* *** protected functions *** */
/* *** private functions *** */
/* *** other *** */
