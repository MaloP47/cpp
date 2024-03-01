/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:16:19 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/01 16:24:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* *** constructors *** */

Span::Span( void ) : _size( 0 ), _span() {}

Span::Span( unsigned int N ) : _size( N ), _span() {}

/* *** copy constructor *** */

Span::Span( Span const & cpy ) : _size( cpy.getSize() ), _span( cpy.getSize() ) {}

/* *** destructor *** */

Span::~Span( void ) {
	std::cout << "Span destroyed.\n" ;
}

/* *** operator = *** */

Span &	Span::operator=( Span const & rhs ) {
	if ( this != &rhs ) {
		_size = rhs.getSize() ;
		_span.clear() ;
		_span.insert( _span.end(), rhs._span.begin(), rhs._span.end() ) ;
	}
	return *this ;
}

/* *** public functions *** */

unsigned int	Span::getSize( void ) const { return _size ; }
std::vector<int> const &	Span::getSpan( void ) const { return _span ; }

void	Span::addNumber( int newNumber ) {
	if ( _span.size() < getSize() ) 
		_span.push_back( newNumber ) ;
	else 
		throw Full() ;
}

void	Span::addRange( std::vector<int>::iterator begin,
						std::vector<int>::iterator end ) {
	unsigned int	size = std::distance( begin, end ) ;
	if ( _span.size() + size > getSize() )
		throw Full() ;
	else {
		_span.insert( _span.end(), begin, end ) ;
	}							
}

unsigned int	Span::shortestSpan( void ) const {
	if ( _span.size() < 2 )
		throw NotEnough() ;
	std::vector<int>	vec = *std::sort( _span.begin(), _span.end() ) ;
	return *std::min_element( ++( vec.begin()), vec.end() ) ;
}

unsigned int	Span::longestSpan( void ) const {
	if ( _span.size() < 2 )
		throw NotEnough() ;
	return *std::max_element( _span.begin(), _span.end() )
			- *std::min_element( _span.begin(), _span.end() ) ;
}

/* *** private functions *** */
/* *** other *** */

std::ostream &	operator<<( std::ostream & os, Span const & rhs ) {
	if ( rhs.getSize() > 0 ) {
		for( std::vector<int>::const_iterator it = rhs.getSpan().begin(); it != rhs.getSpan().end(); ++it ) {
			os << "[" << * it << "]" ;
		}
	}
	return os ;
}

