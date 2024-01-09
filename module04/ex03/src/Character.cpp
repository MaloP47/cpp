/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:45:51 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/09 14:24:04 by mpeulet          ###   ########.fr       */
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

Character::Character( Character const & cpy ) {
	std::cout << CHAR_CPY ;
	*this = cpy ;
}

/* *** destructor *** */

Character::~Character( void ) {
	std::cout << CHAR_DEST ;
}

/* *** operator = *** */

Character & Character::operator=( Character const & rhs ) {
	
}

/* GETTER */

std::string const &	Character::getName( void ) const {
	return _name ;
}

/* *** public functions *** */

void	Character::equip( AMateria* m ) {
	if (!m)
		std::cout << "Nothing to equip.\n" ;
	else if ( _inventorySize < 3 ) {
		_inventory[_inventorySize] = m ;
		_inventorySize++;
		std::cout << MAT_ADDED << 4 - (_inventorySize + 1) << SIZE_LEFT ;
	}
	else
		std::cout << FULL_INV ;
}

void	Character::unequip( int idx ) {
	if ( idx < 0 || idx > 3 || !_inventory[idx] ) {
		std::cout << UNEQUIP_FAILED ;
		return ;
	}
	std::cout << _inventory[idx]->getType() << " Materia dropped by " << getName() << std::endl ;
	_inventory[idx] = 0 ;
	for (int i = idx; i < 3; ++i)
		_inventory[i] = _inventory[i + 1] ;
	_inventory[3] = 0 ;
	_inventorySize-- ;
}

void	Character::use( int idx, ICharacter& target ) {
	
}

/* *** private functions *** */
/* *** other *** */
