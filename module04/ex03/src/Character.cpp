/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:45:51 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/08 12:30:13 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* *** constructors *** */

Character::Character( void ) : _name( "Unknown" ) {
	std::cout << CHAR_CONST ;
}

Character::Character( std::string const & name ) : _name( name ) {
	std::cout << CHAR_NAME ;
}

/* *** copy constructor *** */

Character::Character( Character const & cpy ) {
	std::cout << CHAR_CPY ;
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
	
}

void	Character::unequip( int idx ) {
	
}

void	Character::use( int idx, Icharacter& target ) {
	
}

/* *** private functions *** */
/* *** other *** */
