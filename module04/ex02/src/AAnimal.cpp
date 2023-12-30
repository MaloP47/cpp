/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 18:32:18 by root              #+#    #+#             */
/*   Updated: 2023/12/30 18:32:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AAnimal.hpp"

/* *** constructor *** */

AAnimal::AAnimal( void ) : type( RAND ) {
	std::cout << DEF ;
}

/* *** copy constructor *** */

AAnimal::AAnimal( AAnimal const & cpy ) {
	std::cout << AAnimal_CPY ;
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
