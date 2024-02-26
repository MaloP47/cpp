/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:51:51 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/26 15:06:15 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <algorithm>
# include <exception>

template< typename T >
typename T::const_iterator	easyfind( T const & type, int const nb ) {
		typename T::const_iterator	it = std::find( type.begin(), type.end(), nb ) ;
		return it != type.end() ? it : throw std::exception ;
}
