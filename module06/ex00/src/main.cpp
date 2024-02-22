/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:36:51 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/22 17:07:28 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main( void ) {

	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "0" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "nan" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "42.0f" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "'0'" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "97f" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "424242.0f" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "-42424.0f" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "42424" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "2147483647" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "-2147483648" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "2147483648" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "122" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "90" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "170" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "2147483648.0" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "122.0" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "90.0" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "170.0" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "Hello" ) ;
	std::cout << "-------------------\n" ;
	ScalarConverter::convert( "" ) ;

	return 0 ;
}
