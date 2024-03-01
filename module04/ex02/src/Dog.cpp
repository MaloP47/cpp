/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:11:13 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/01 16:40:19 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* *** constructors *** */

Dog::Dog( void ) : AAnimal(), _dogBrain( new Brain ) {
	type = DOG ;
	std::cout << DEF_DOG ;
}

/* *** copy constructor *** */

Dog::Dog( Dog const & cpy ) : AAnimal() {
	std::cout << DOG_CPY ;
	_dogBrain = 0 ;
	*this = cpy ;
}

/* *** destructor *** */

Dog::~Dog( void ) {
	delete _dogBrain ;
	std::cout << DEST_DOG ;
}

/* *** operator = *** */

Dog &	Dog::operator=( Dog const & rhs ) {
	if ( this != &rhs ) {
		type = rhs.getType() ;
		if ( _dogBrain ) 
			delete _dogBrain ;
		_dogBrain = new Brain( *rhs._dogBrain ) ;
	}
	return *this ;
}

/* GETTER */

Brain*	Dog::getBrain( void ) const {
	return _dogBrain ;
}

/* *** public functions *** */

void	Dog::makeSound( void ) const {
	std::cout << getType() << DOG_SOUND ;
}

/* *** private functions *** */
/* *** other *** */
