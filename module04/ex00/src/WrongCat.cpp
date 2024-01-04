/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:11:00 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:11:02 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


/* *** constructors *** */

WrongCat::WrongCat( void ) : WrongAnimal() {
	type = W_CAT ;
	std::cout << DEF_WCAT ;
}

/* *** copy constructor *** */

WrongCat::WrongCat( WrongCat const & cpy) : WrongAnimal() {
	std::cout << W_CAT_CPY ;	
	*this = cpy ;
}

/* *** destructor *** */

WrongCat::~WrongCat( void ) {
	std::cout << DEST_WCAT ;
}

/* *** operator = *** */

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {
	if ( this != &rhs ) {
		type = rhs.getType() ;
	}
	return *this ;
}

void	WrongCat::makeSound( void ) const {
	std::cout << getType() << W_CAT_SOUND ;
}

/* *** public functions *** */
/* *** private functions *** */
/* *** other *** */
