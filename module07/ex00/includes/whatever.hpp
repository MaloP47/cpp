/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:38:09 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/23 11:40:20 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< typename T >
void	swap( T & x, T & y ) {
	T	tmp = x ;
	x = y ;
	y = tmp ;
}

template< typename T >
T const &	max( T const & x, T const & y ) {
	return x >= y ? x : y ;	
}

template< typename T >
T const &	min( T const & x, T const & y ) {
	return x <= y ? x : y ;	
}
