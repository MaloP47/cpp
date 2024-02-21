/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:44:06 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/21 11:31:40 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

class	D : public Base {} ;

int	main( void ) {

	Base * base = generate() ;

	Base * testD = new D ;

	std::cout << "-------------------\n" ;
	identify( base ) ;
	std::cout << "-------------------\n" ;
	identify( * base ) ;
	std::cout << "-------------------\n" ;
	identify( testD ) ;
	std::cout << "-------------------\n" ;
	identify( * testD ) ;

	delete base ;
	delete testD ;
	
	return 0 ;

}
