/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:16:38 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/29 18:55:01 by mpeulet          ###   ########.fr       */
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

	return 0 ;
}
