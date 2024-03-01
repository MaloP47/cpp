/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:38:27 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/01 15:17:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

class	Span {

	public:

		Span( void ) ;
		Span( unsigned int N ) ;
		Span( Span const & cpy ) ;
		~Span( void ) ;
		Span &	operator=( Span const & rhs ) ;

		unsigned int				getSize( void ) const ;
		std::vector<int> const &	getSpan( void ) const ;

		void			addNumber( int newNumber ) ;
		void			addRange( std::vector<int>::iterator begin,
									std::vector<int>::iterator end ) ;
		unsigned int	shortestSpan( void ) const ;
		unsigned int	longestSpan( void ) const ;

		class	Full : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return "Span is full." ;
				} 
		} ;

		class	NotEnough : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return "Span is to small to look for a range." ;
				} 
		} ;

	private:

		unsigned int		_size ;
		std::vector<int>	_span ;

} ;

std::ostream &	operator<<( std::ostream & os, Span const & rhs ) ;

/* *** SPAN.HPP *** */
