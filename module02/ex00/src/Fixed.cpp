/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:06:52 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/16 14:54:55 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* *** constructor *** */

Fixed::Fixed( void ) : _fixed( 0 ) {
	std::cout << DEFAULT ;
}

/* *** copy constructor *** */

Fixed::Fixed( Fixed const & cpy ) {
	std::cout << COPY;
	*this = cpy ;
}

/* *** operator = *** */

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	std::cout << COPY_OPERATOR ;
	_fixed = rhs.getRawBits() ;
	return *this ;
}

/* *** destructor *** */

Fixed::~Fixed( void ) {
	std::cout << DESTRUCTOR ;
}

/* *** public functions *** */

int		Fixed::getRawBits( void ) const {
	std::cout << RAWBITS ;
	return _fixed ;
}

void	Fixed::setRawBits( int const raw ) {
	_fixed = raw ;
}

/* *** private function *** */
