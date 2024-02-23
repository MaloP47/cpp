/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:25:57 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/23 13:12:37 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once	

# include <iostream>

template< typename A, typename L, typename F>
void	iter( A * adress, L len, F function ) {
	for ( L i = 0; i < len; ++i)
		function( adress[i] ) ;
}

template< typename T >
void	toNeg( T & toNeg ) {
	if ( toNeg > 0 )
		toNeg *= - 1 ;
}

template< typename T >
void	print( T & item ) {
	std::cout << item << std::endl ;
}
