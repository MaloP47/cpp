/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:09:47 by root              #+#    #+#             */
/*   Updated: 2023/12/29 15:02:28 by root             ###   ########.fr       */
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