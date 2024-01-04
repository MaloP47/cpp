/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:16:09 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:16:11 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* *** constructors *** */

Cat::Cat( void ) : AAnimal(), _catBrain( new Brain ) {
	type = CAT ;
	std::cout << DEF_CAT ;
}

/* *** copy constructor *** */

Cat::Cat( Cat const & cpy) : AAnimal() {
	std::cout << CAT_CPY ;	
	*this = cpy ;
}

/* *** destructor *** */

Cat::~Cat( void ) {
	delete _catBrain ;
	std::cout << DEST_CAT ;
}

/* *** operator = *** */

Cat & Cat::operator=( Cat const & rhs ) {
	if ( this != &rhs ) {
		type = rhs.getType() ;
		if ( _catBrain )
			delete _catBrain ;
		_catBrain = new Brain( * rhs._catBrain ) ;
	}
	return *this ;
}

void	Cat::makeSound( void ) const {
	std::cout << getType() << CAT_SOUND ;
}

/* *** public functions *** */
/* *** private functions *** */
/* *** other *** */
