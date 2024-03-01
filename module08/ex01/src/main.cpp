/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:16:38 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/01 16:41:45 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void ) {

	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp ;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "----------------------------------------\n" ;
	{
		Span sp = Span(5);

		sp.addNumber(-8000);
		sp.addNumber(-3);
		sp.addNumber(-4);
		sp.addNumber(-5);
		sp.addNumber(1);

		std::cout << sp ;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "----------------------------------------\n" ;
	{
		Span sp = Span(5);
		Span sp1 = Span(50);

		sp.addNumber(-8000);

		std::cout << sp ;
		std::cout << sp1 ;

		try {
			std::cout << sp.longestSpan() << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl ;
		}
		try {
			std::cout << sp1.longestSpan() << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl ;
		}
	}
	std::cout << "----------------------------------------\n" ;
	{
		Span	sp( 42000 ) ;
		Span	sp1( 42000 ) ;
	
		std::vector<int>	vec(41998, 42) ;
	
		sp.addNumber( -42 ) ;
		sp.addRange( vec.begin(), vec.end() ) ;
		sp.addNumber(42424242) ;
		std::cout << sp << std::endl ;
		std::cout << sp.getSpan().size() << "\n" << sp.getSize() << std::endl ;
		std::cout << "*" << sp.longestSpan() << "*"<< std::endl;
		std::cout << "---\n" ;
		sp1.addNumber(0) ;
		sp1.addNumber(1) ;
		sp1.addNumber(2) ;
		std::cout << sp1.getSpan().size() << "\n" << sp1.getSize() << std::endl ;
		try {
			sp1.addRange( vec.begin(), vec.end() ) ;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl ;
		}

	return 0 ;
}
