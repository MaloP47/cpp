/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:11:13 by root              #+#    #+#             */
/*   Updated: 2023/12/24 13:45:35 by root             ###   ########.fr       */
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
