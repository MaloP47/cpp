/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:49:03 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/08 11:03:31 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* *** constructors *** */

Ice::Ice( void ) : AMateria( "ice" ) {
	std::cout << DEF_ICE ;
}

/* *** copy constructor *** */

Ice::Ice( Ice const & cpy ) : AMateria( "ice" ) {
	std::cout << ICE_CPY ;
	*this = cpy ;
}

/* *** destructor *** */

Ice::~Ice( void ) {
	std::cout << DEST_ICE ;
}

/* *** operator = *** */

Ice & Ice::operator=( Ice const & rhs ) {
	if ( this != &rhs ) {
		_type = rhs.getType();
	}
	return *this ;
}

/* *** public functions *** */

AMateria*	Ice::clone( void ) const {
	AMateria* cloned = new Ice() ;
	return cloned ;
}

void	Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n" ;
}

/* *** private functions *** */
/* *** other *** */
