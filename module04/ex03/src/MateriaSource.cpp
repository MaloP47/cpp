/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:48:23 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/10 12:55:00 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* *** constructors *** */

MateriaSource::MateriaSource( void ) : _size( 0 ) {
	for ( int i = 0; i < 4; ++i )
		_stored[i] = 0 ;
	std::cout << MS_CONST ;
}

/* *** copy constructor *** */

MateriaSource::MateriaSource( MateriaSource const & cpy ) : _size( 0 ) {
	for ( int i = 0; i < 4; ++i )
		_stored[i] = 0 ;
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
	for ( int i = 0; i < 4; ++i ) {
		if ( _stored[i] ) {
			delete _stored[i] ;
			_stored[i] = 0 ;
		}
	}
	_size = rhs.getSize() ;
	if ( _size > 0 ) {
		for ( unsigned int i = 0; i < _size; ++i ) {
			_stored[i] = rhs._stored[i]->clone() ;
		}
	}
	return *this ;
}

/* GETTER */

int	MateriaSource::getSize( void ) const {
	return _size ;
}

/* *** public functions *** */

void	MateriaSource::learnMateria( AMateria* m) {
	if (!m)
		std::cout << "Nothing to learn.\n" ;
	else if ( _size < 4 ) {
		_stored[_size] = m ;
		_size++;
		std::cout << MAT_LEARNED << 4 - ( _size ) << SIZE_LEFT_S ;
	}
	else
		std::cout << FULL_STORAGE ;
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	if ( _size < 1 ) {
		std::cout << "MateriaSource is empty.\n" ;
		return 0 ;
	}
	for ( unsigned int i = 0; i < _size; ++i ) {
		if ( type == _stored[i]->getType() )
			return _stored[i]->clone() ;
		}
	std::cout << "Type unknown.\n" ;
	return 0 ;
}

/* *** private functions *** */
/* *** other *** */
