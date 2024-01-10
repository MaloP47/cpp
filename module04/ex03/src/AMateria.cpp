/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:09:24 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/10 13:55:53 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* *** constructors *** */

AMateria::AMateria( void ) : _type( "Random" ) {
	std::cout << DEF_AM ;
}

AMateria::AMateria( std::string const & type ) : _type( type ) {
	std::cout << TYPE_CONSTRUCTOR ;
}

/* *** copy constructor *** */

AMateria::AMateria( AMateria const & cpy ) {
	std::cout << AMATERIA_CPY ;
	*this = cpy ;
}

/* *** destructor *** */

AMateria::~AMateria( void ) {
	std::cout << DEST_AM ;
}

/* *** operator = *** */

AMateria & AMateria::operator=( AMateria const & rhs ) {
	if ( this != &rhs ) {
		_type = rhs.getType() ;
	}
	return *this ;
}
		
/* *** public functions *** */

void	AMateria::use( ICharacter& target ) {
	std::cout << "* uses a " << getType() << " effect toward " << target.getName() << " *"<< std::endl;
}

/* GETTER */

std::string const &	AMateria::getType( void ) const {
	return _type ;
}		

/* *** private functions *** */
/* *** other *** */
