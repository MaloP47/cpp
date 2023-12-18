/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:06:52 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/18 16:11:56 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* *** constructors *** */

Fixed::Fixed( void ) : _fixed( 0 ) {
	// std::cout << DEFAULT ;
}

Fixed::Fixed( const int int_conv ) : _fixed( int_conv << _bits ) {
	// std::cout << INT_CONSTRUCTOR ;
}

Fixed::Fixed( const float float_conv ) : _fixed( roundf( float_conv * ( 1 << _bits ) )) {
	// std::cout << FLOAT_CONSTRUCTOR ;
}

/* *** copy constructor *** */

Fixed::Fixed( Fixed const & cpy ) {
	// std::cout << COPY;
	*this = cpy ;
}

/* *** operator = *** */

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	// std::cout << COPY_OPERATOR ;
	if (this == &rhs)
		return *this ;
	_fixed = rhs.getRawBits() ;
	return *this ;
}

/* *** destructor *** */

Fixed::~Fixed( void ) {
	// std::cout << DESTRUCTOR ;
}

/* *** public functions *** */

/* GETTER */

int	Fixed::getRawBits( void ) const {
	// std::cout << RAWBITS ;
	return _fixed ;
}

/* SETTER */

void	Fixed::setRawBits( int const raw ) {
	_fixed = raw ;
}

float	Fixed::toFloat( void ) const {
	return static_cast<float>(_fixed) / ( 1 << _bits ) ;
}

int	Fixed::toInt( void ) const {
	return _fixed >> _bits ;
}

/* *** private function *** */

//

/* *** other *** */

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat() ;
	return o;
}

/* *** EXERCISE *** */

bool	Fixed::operator>( Fixed const & rhs ) const {
	return _fixed > rhs.getRawBits();
}

bool	Fixed::operator<( Fixed const & rhs ) const {
	return _fixed < rhs.getRawBits();
}

bool	Fixed::operator>=( Fixed const & rhs ) const {
	return _fixed >= rhs.getRawBits();
}

bool	Fixed::operator<=( Fixed const & rhs ) const {
	return _fixed <= rhs.getRawBits();
}

bool	Fixed::operator==( Fixed const & rhs ) const {
	return _fixed == rhs.getRawBits();
}

bool	Fixed::operator!=( Fixed const & rhs ) const {
	return _fixed != rhs.getRawBits();
}

/********************************************************/

Fixed	Fixed::operator+( Fixed const &rhs ) const {
	return Fixed( this->toFloat() + rhs.toFloat() ) ;
}

Fixed	Fixed::operator-( Fixed const &rhs ) const {
	return Fixed( this->toFloat() - rhs.toFloat() ) ;
}

Fixed	Fixed::operator*( Fixed const &rhs ) const {
	return Fixed( this->toFloat() * rhs.toFloat() ) ;
}

Fixed	Fixed::operator/( Fixed const &rhs ) const {
	return Fixed( this->toFloat() / rhs.toFloat() ) ;
}


/********************************************************/

Fixed &	Fixed::operator++( void ) {
	this -> _fixed++ ;
	return *this ;
}

Fixed &	Fixed::operator--( void ) {
	this -> _fixed-- ;
	return *this ;
}

Fixed	Fixed::operator++( int ) {
	Fixed	tmp( *this ) ;
	++( *this );
	return tmp ;
}

Fixed	Fixed::operator--( int ) {
	Fixed	tmp( *this ) ;
	--( *this );
	return tmp ;
}

/********************************************************/

Fixed &			Fixed::min( Fixed & a, Fixed & b ) {
	return a < b ? a : b ;
}

Fixed &			Fixed::max( Fixed & a, Fixed & b ) {
	return a > b ? a : b ;
}

const Fixed &	Fixed::min( const Fixed & a, const Fixed & b ) {
	return a < b ? a : b ;
}

const Fixed &	Fixed::max( const Fixed & a, const Fixed & b ) {
	return a > b ? a : b ;
}
