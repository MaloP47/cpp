/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:24:09 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/03 15:36:05 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>
# include <deque>

template < typename T, typename C = std::deque<T> >
class	MutantStack : public std::stack<T, C> {

	public:
	
		typedef typename C::iterator				iterator ;
		typedef typename C::const_iterator			const_iterator ;
		typedef typename C::reverse_iterator		reverse_iterator ;
		typedef typename C::const_reverse_iterator	const_reverse_iterator ;

		MutantStack<T, C>( void ) : std::stack<T, C>() {}
		MutantStack<T, C>( MutantStack const & cpy ) : std::stack<T, C>( cpy ) {} 
		virtual ~MutantStack<T, C>( void ) {}
		MutantStack &	operator=( MutantStack<T, C> const & rhs ) {
			if ( this != rhs )
				std::stack<T, C>::operator=( rhs ) ;
			return *this ;
		}

		iterator				begin( void ) { return this->c.begin() ; }
		iterator				end( void ) { return this->c.end() ; }
		const_iterator			begin( void ) const { return this->c.begin() ; }
		const_iterator			end( void ) const { return this->c.end() ; }
		reverse_iterator		rbegin( void ) { return this->c.rbegin() ; }
		reverse_iterator		rend( void ) { return this->c.rend() ; }
		const_reverse_iterator	rbegin( void ) const { return this->c.rbegin() ; }
		const_reverse_iterator	rend( void ) const { return this->c.rend() ; }

} ;

/* *** MUTANTSTACK.HPP *** */
