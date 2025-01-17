/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:09:47 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/01 16:39:40 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* *** constructors *** */

Cat::Cat( void ) : Animal(), _catBrain( new Brain ) {
	type = CAT ;
	std::cout << DEF_CAT ;
}

/* *** copy constructor *** */

Cat::Cat( Cat const & cpy) : Animal() {
	std::cout << CAT_CPY ;
	_catBrain = 0 ;
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

/* GETTER */

Brain*	Cat::getBrain( void ) const {
	return _catBrain ;
}

/* *** public functions *** */

void	Cat::makeSound( void ) const {
	std::cout << getType() << CAT_SOUND ;
}

/* *** private functions *** */
/* *** other *** */
