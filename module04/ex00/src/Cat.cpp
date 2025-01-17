/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:10:29 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:10:31 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* *** constructors *** */

Cat::Cat( void ) : Animal() {
	type = CAT ;
	std::cout << DEF_CAT ;
}

/* *** copy constructor *** */

Cat::Cat( Cat const & cpy) : Animal() {
	std::cout << CAT_CPY ;	
	*this = cpy ;
}

/* *** destructor *** */

Cat::~Cat( void ) {
	std::cout << DEST_CAT ;
}

/* *** operator = *** */

Cat & Cat::operator=( Cat const & rhs ) {
	if ( this != &rhs ) {
		type = rhs.getType() ;
	}
	return *this ;
}

void	Cat::makeSound( void ) const {
	std::cout << getType() << CAT_SOUND ;
}

/* *** public functions *** */
/* *** private functions *** */
/* *** other *** */
