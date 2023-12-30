/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:11:13 by root              #+#    #+#             */
/*   Updated: 2023/12/30 18:28:20 by root             ###   ########.fr       */
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
