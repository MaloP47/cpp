/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:48:23 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/09 11:37:47 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* *** constructors *** */

MateriaSource::MateriaSource( void ) {
	for ( int i = 0; i < 4; ++i )
		_stored[i] = 0 ;
	std::cout << MS_CONST ;
}

/* *** copy constructor *** */

MateriaSource::MateriaSource( MateriaSource const & cpy ) {
	std::cout << MS_CPY ;
	*this = cpy;
}

/* *** destructor *** */

MateriaSource::~MateriaSource( void ) {
	for ( int i = 0; i < 4; ++i ) {
		if ( _stored[i] ) {
			delete _stored[i] ;
			_stored[i] = 0 ;
		}
	}
	std::cout << MS_DEST ;
}

/* *** operator = *** */

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs ) {
	
}

/* *** public functions *** */

void	MateriaSource::learnMateria( AMateria* ) {
	
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	
}

/* *** private functions *** */
/* *** other *** */
