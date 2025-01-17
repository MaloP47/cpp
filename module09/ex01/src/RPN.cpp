/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:24:23 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/08 11:03:30 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* *** constructors *** */

RPN::RPN( void ) {}
RPN::RPN( std::string const & input ) : _input( input ) {
	parseInput() ;
	evaluate() ;
} 

/* *** copy constructor *** */

RPN::RPN( RPN const & cpy ) : _input( cpy.getInput() ) {}

/* *** destructor *** */

RPN::~RPN( void ) {}

/* *** operator = *** */

RPN &	RPN::operator=( RPN const & rhs ) {
	if ( this != &rhs ) {
		_pile = rhs.getPile() ;
		_input = rhs.getInput() ;
	}
	return * this ;
}

/* *** public functions *** */

std::stack<int> const &	RPN::getPile( void ) const { return _pile ; }
std::string const &		RPN::getInput( void ) const { return _input ; }

/* *** private functions *** */

void	RPN::parseInput( void ) {
	short	nb = 0 ;
	short	op = 0 ;
	size_t	i = _input.find_first_not_of( "0123456789+-*/ " ) ;
	
	if ( i != std::string::npos )
		throw std::runtime_error( "Error: Wrong argument character found: "
			 + std::string(1, _input[i] ) + "." ) ;
	for ( std::string::const_iterator cit = _input.begin(); cit != _input.end(); ++cit ) {
		if ( std::isdigit( *cit ) )
			nb++ ;
		else if ( *cit == '+' || *cit == '-' || *cit == '*' || *cit == '/' )
			op++ ;
	}
	if ( nb - op != 1 || ( nb - op == 1 && op == 0 ) )
		throw std::runtime_error( "Error: Invalid format." ) ;
}

int	RPN::add( int x, int y ) {
	long int	res = static_cast<long int>(x) + static_cast<long int>(y) ;
	if ( res > INT_MAX || res < INT_MIN )
		throw std::runtime_error( "Error: overflow." ) ;
	return static_cast<int>( res ) ;
}

int	RPN::substract( int x, int y ) {
	long int	res = static_cast<long int>(x) - static_cast<long int>(y) ;
	if ( res > INT_MAX || res < INT_MIN )
		throw std::runtime_error( "Error: overflow." ) ;
	return static_cast<int>( res ) ;
}

int	RPN::multiply( int x, int y ) {
	long long int	res = static_cast<long long int>(x) * static_cast<long long int>(y) ;
	if ( res > INT_MAX || res < INT_MIN ) 
		throw std::runtime_error( "Error: overflow." ) ;
	return static_cast<int>( res ) ;
}

int	RPN::divide( int x, int y ) {
	if ( !y )
		throw std::runtime_error( "Error: divide by 0 is undefined behavior." ) ;
	long long int	res = static_cast<long long int>(x) / static_cast<long long int>(y) ;
	if ( res > INT_MAX || res < INT_MIN )
		throw std::runtime_error( "Error: overflow." ) ;
	return static_cast<int>( res ) ;
}

void	RPN::evaluate( void ) {
	int				x = 0 ;
	int				y = 0 ;
	char	sign ;

	for ( std::string::iterator it = _input.begin(); it != _input.end(); ++it ) {
		if ( std::isdigit( * it ) )
			_pile.push( *it - 48 ) ;
		else if ( *it == '+' || *it == '-' || *it == '*' || *it == '/' ) {
			sign = *it ;
			if ( _pile.size() < 2 )
				throw std::runtime_error( "Error: Pile needs at least 2 values." ) ;
			y = _pile.top() ;
			_pile.pop() ;
			x = _pile.top() ;
			_pile.pop() ;
			switch ( sign ) {
				case '+':
					_pile.push( add( x, y ) ) ;
					break;
				case '-':
					_pile.push( substract( x, y ) ) ;
					break;
				case '*':
					_pile.push( multiply( x, y ) ) ;
					break;
				case '/':
					_pile.push( divide( x, y ) ) ;
					break;
			}
		}
	}
	std::cout << _pile.top() << std::endl ;
}

/* *** other *** */
