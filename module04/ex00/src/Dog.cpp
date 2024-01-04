/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:10:36 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:10:38 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* *** constructors *** */

Dog::Dog( void ) : Animal() {
	type = DOG ;
	std::cout << DEF_DOG ;
}

/* *** copy constructor *** */

Dog::Dog( Dog const & cpy ) : Animal() {
	std::cout << DOG_CPY ;	
	*this = cpy ;
}

/* *** destructor *** */

Dog::~Dog( void ) {
	std::cout << DEST_DOG ;
}

/* *** operator = *** */

Dog &	Dog::operator=( Dog const & rhs ) {
	if ( this != &rhs ) {
		type = rhs.getType() ;
	}
	return *this ;
}

void	Dog::makeSound( void ) const {
	std::cout << getType() << DOG_SOUND ;
}

/* *** public functions *** */
/* *** private functions *** */
/* *** other *** */
