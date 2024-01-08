/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:46:39 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/08 11:00:39 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* *** constructors *** */

Cure::Cure( void ) : AMateria( "cure" ) {
	std::cout << DEF_CURE ;
}

/* *** copy constructor *** */

Cure::Cure( Cure const & cpy ) : AMateria( "cure" ) {
	std::cout << CURE_CPY ;
	*this = cpy ;
}

/* *** destructor *** */

Cure::~Cure( void ) {
	std::cout << DEST_CURE ;
}

/* *** operator = *** */

Cure & Cure::operator=( Cure const & rhs ) {
	if ( this != &rhs ) {
		_type = rhs.getType();
	}
	return *this ;
}

/* *** public functions *** */

AMateria*	Cure::clone( void ) const {
	AMateria* cloned = new Cure() ;
	return cloned ;
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n" ;
}

/* *** private functions *** */
/* *** other *** */
