/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:06:52 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/16 15:36:13 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* *** constructors *** */

Fixed::Fixed( void ) : _fixed( 0 ) {
	std::cout << DEFAULT ;
}

Fixed::Fixed( const int to_float ) {
	
}

Fixed::Fixed( const float to_fixed_comma ) {
	
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

/* GETTER */

int	Fixed::getRawBits( void ) const {
	std::cout << RAWBITS ;
	return _fixed ;
}

/* SETTER */

void	Fixed::setRawBits( int const raw ) {
	_fixed = raw ;
}

float	toFloat( void ) const {
	
}

int	toInt( void ) const {
	
}

/* *** private function *** */

//

/* *** other *** */

std::ostream &	operator<<( std::ostream o, Fixed const & rhs ) {
	o << rhs.getRawBits() ;
	return o;
}
