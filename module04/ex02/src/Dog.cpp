/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:16:15 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:16:17 by mpeulet          ###   ########.fr       */
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

void	Dog::makeSound( void ) const {
	std::cout << getType() << DOG_SOUND ;
}

/* *** public functions *** */
/* *** private functions *** */
/* *** other *** */
