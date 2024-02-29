/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:51:51 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/29 15:09:40 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <algorithm>
# include <exception>

class	NotFound : public std::exception {
	public:
		virtual const char * what( void ) const throw() {
			return "Nb not found." ;
		}
} ;

template< typename T >
typename T::const_iterator	easyfind( T const & type, int const nb ) {
		typename T::const_iterator	it = std::find( type.begin(), type.end(), nb ) ;
		if ( it != type.end() )
			return it ;
		else {
			throw ::NotFound() ;
		}
}
