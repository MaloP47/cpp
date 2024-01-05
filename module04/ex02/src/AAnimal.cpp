/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:15:47 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/05 12:34:10 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* *** constructor *** */

AAnimal::AAnimal( void ) : type( RAND ) {
	std::cout << DEF ;
}

/* *** copy constructor *** */

AAnimal::AAnimal( AAnimal const & cpy ) {
	std::cout << AANIMAL_CPY ;
	*this = cpy ;
}

/* *** destructor *** */

AAnimal::~AAnimal( void ) {
	std::cout << DEST ;
}

/* *** operator = *** */

AAnimal &	AAnimal::operator=( AAnimal const & rhs ) {
	if ( this != &rhs ) {
		type = rhs.getType() ;
	}
	return *this ;
}

/* *** public functions *** */

/* GETTER */

const std::string &	AAnimal::getType( void ) const {
	return type ;
}

/* SETTER */

bool	AAnimal::setType( const std::string & set ) {
	type = set ;
	return true ;
}

void	AAnimal::makeSound( void ) const {
	std::cout << getType() << R_SOUND ;
}

/* *** protected functions *** */
/* *** private functions *** */
/* *** other *** */
