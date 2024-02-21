/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:43:14 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/21 11:33:28 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

Base *	generate( void ) {
	std::srand( static_cast<unsigned int>( std::time( 0 ) ) ) ;
	int rand = std::rand() % 3 ;
	switch ( rand ) {
		case 0:
			return new A ;
		case 1:
			return new B ;
		case 2:
			return new C ;
	}
	return NULL ;
}

void	identify( Base * p ) {
	if ( dynamic_cast<A *>(p) )
		std::cout << "Class is a A type class.\n" ;
	else if ( dynamic_cast<B *>(p) )
		std::cout << "Class is a B type class.\n" ;
	else if ( dynamic_cast<C *>(p) )
		std::cout << "Class is a C type class.\n" ;
	else
		std::cout << "Unknown class.\n" ;
}

void	identify( Base & p ) {
	try {
		A & a = dynamic_cast<A &>(p) ;
		(void)a ;
		std::cout << "\033[0;92mClass is a A type class.\n\033[0;39m" ;
		return ;
	}
	catch ( std::bad_cast & e ) {
		std::cout << "\033[0;91mClass is not a type A.\n" << e.what() << "\033[0;39m" << std::endl ;
	}
	try {
		B & b = dynamic_cast<B &>(p) ;
		(void)b ;
		std::cout << "\033[0;92mClass is a B type class.\n\033[0;39m" ;
		return ;
	}
	catch ( std::bad_cast & e ) {
		std::cout << "\033[0;91mClass is not a type B.\n" << e.what() << "\033[0;39m" << std::endl ;
	}
	try {
		C & c = dynamic_cast<C &>(p) ;
		(void)c ;
		std::cout << "\033[0;92mClass is a C type class.\n\033[0;39m" ;
		return ;
	}
	catch ( std::bad_cast & e ) {
		std::cout << "\033[0;91mClass is not a type C.\n" << e.what() << "\033[0;39m" << std::endl ;
	}
	std::cout << "Class unknown.\n" ;
}
