/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:01 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/21 14:29:39 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main( void ) {

	// Serializer	s ;

	Data		data = {'Z', "Hello", 42424242} ;
	Data		*data_ptr ;
	uintptr_t	uint = Serializer::serialize( &data ) ;
	uintptr_t	test = uint ;
	Data		*test_ptr ;

	std::cout << sizeof( uintptr_t ) << "\n" << sizeof( data ) << "\n" ;

	std::cout << "----------------------------\n" ;
	data_ptr = Serializer::deserialize( uint ) ;
	std::cout << data_ptr->c << "\n"
	<< data_ptr->s << "\n"
	<< data_ptr->n << "\n" ;
	std::cout << "----------------------------\n" ;
	test_ptr = Serializer::deserialize( test ) ;
	std::cout << test_ptr->c << "\n"
	<< test_ptr->s << "\n"
	<< test_ptr->n << "\n" ;

	std::cout << "----------------------------\n" ;
	std::cout << &test << "\n"
	<< &uint << "\n"
	<< &data_ptr << "\n"
	<< &test_ptr <<  "\n" ;
 
	return 0 ;
}
