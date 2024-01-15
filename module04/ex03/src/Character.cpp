/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:45:51 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/15 14:02:08 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* *** constructors *** */

Character::Character( void ) : _name( "Unknown Character" ), _inventorySize( 0 ) {
	for ( int i = 0; i < 4; ++i )
		_inventory[i] = 0;
	std::cout << CHAR_CONST ;
}

Character::Character( std::string const & name ) : _name( name ), _inventorySize( 0 ) {
	for ( int i = 0; i < 4; ++i )
		_inventory[i] = 0;
	std::cout << CHAR_NAME ;
}

/* *** copy constructor *** */

Character::Character( Character const & cpy ) : _inventorySize( 0 ) {
	std::cout << CHAR_CPY ;
	for ( int i = 0; i < 4; ++i )
		_inventory[i] = 0;
	_name = cpy.getName() ;
	_inventorySize = cpy.getInventorySize() ;
	if ( _inventorySize > 0 ) {
		for ( unsigned int i = 0; i < _inventorySize; ++i ) {
			_inventory[i] = cpy._inventory[i]->clone() ;
		}
	}
}

/* *** destructor *** */

Character::~Character( void ) {
	for ( int i = 0; i < 4; ++i) {
		if ( _inventory[i]) {
			delete _inventory[i] ;
			_inventory[i] = 0 ;
		}
	}
	std::cout << CHAR_DEST ;
}

/* *** operator = *** */

Character & Character::operator=( Character const & rhs ) {
	_name = rhs.getName() ;
	for ( int i = 0; i < 4; ++i) {
		if ( _inventory[i]) {
			delete _inventory[i] ;
			_inventory[i] = 0 ;
		}
	}
	_inventorySize = rhs.getInventorySize() ;
	if ( _inventorySize > 0 ) {
		for ( unsigned int i = 0; i < _inventorySize; ++i ) {
			_inventory[i] = rhs._inventory[i]->clone() ;
		}
	}
	return *this ;
}

/* GETTER */

std::string const &	Character::getName( void ) const {
	return _name ;
}

int	Character::getInventorySize( void ) const {
	return _inventorySize ;
}

/* *** public functions *** */

void	Character::equip( AMateria* m ) {
	if (!m)
		std::cout << "Nothing to equip.\n" ;
	else if ( _inventorySize < 4 ) {
		_inventory[_inventorySize] = m ;
		_inventorySize++;
		std::cout << MAT_ADDED << getName() << ", " << 4 - ( _inventorySize ) << SIZE_LEFT ;
	}
	else
		std::cout << FULL_INV ;
}

void	Character::unequip( int idx ) {
	if ( idx < 0 || idx > 3 || (unsigned)idx >= _inventorySize || !_inventorySize ) {
		std::cout << UNEQUIP_FAILED ;
		return ;
	}
	std::cout << _inventory[idx]->getType() << " Materia dropped by " << getName() ;
	_inventory[idx] = 0 ;
	for (int i = idx; i < 3; ++i)
		_inventory[i] = _inventory[i + 1] ;
	_inventory[3] = 0 ;
	_inventorySize-- ;
	std::cout << ", there is / are " << getInventorySize() << " Materia(s) in the inventory\n" ;
}

void	Character::use( int idx, ICharacter& target ) {
	if ( idx < 0 || idx > 3 || !_inventory[idx] ) {
		std::cout << USE_FAILED ;
		return ;
	}
	std::cout << getName() << " ";
	_inventory[idx]->use( target ) ;
}

/* *** private functions *** */
/* *** other *** */
