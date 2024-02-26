/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:56:36 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/26 15:06:21 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <stack>
#include <iostream>

int	main( void ) {

	std::stack<int>	st;

	st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

	std::cout << *::easyfind( st, 3 ) << std::endl ;

	return 0 ;
}
