/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:07:41 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/27 15:15:03 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {
	{
		try {
			Bureaucrat	Alice("Alice", 155) ;
		}
		catch ( std::exception & e) {
			std::cout << e.what() ;
		}
		try {
			Bureaucrat	Bob("Bob", 0);
		}
		catch ( std::exception & e) {
			std::cout << e.what() ;
		}
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat	Alice("Alice", 112);
		Bureaucrat	Bob("Bob", 3);
		std::cout << Bob ;
		std::cout << Alice ;
		Bureaucrat	Cpy(Alice);
		std::cout << Cpy ;
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat	Alice("Alice", 150);
		Bureaucrat	Bob("Bob", 1);
		++Bob ;
		--Alice ;
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat	Alice("Alice", 149);
		Bureaucrat	Bob("Bob", 2);
		std::cout << Alice ;
		std::cout << Bob ;
		++Bob ;
		--Alice ;
		std::cout << Alice ;
		std::cout << Bob ;
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat	Uk ;
		std::cout << Uk ;
		Uk.setGrade(0) ;
		std::cout << Uk ;
		Uk.setGrade(152) ;
		std::cout << Uk ;
		Uk.setGrade(42) ;
		std::cout << Uk ;
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat	Alice("Alice", 100) ;
		Alice.incrementGrade(50) ;
		std::cout << Alice ;
		Alice.incrementGrade(50) ;
		std::cout << Alice ;
		Alice.decrementGrade(150) ;
		std::cout << Alice ;
		Alice.decrementGrade(-1) ;
		std::cout << Alice ;
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat	Alice("Alice", 100) ;
		Alice.incrementGrade(1) ;
		std::cout << Alice ;
		Alice.incrementGrade(2) ;
		std::cout << Alice ;
		Alice.decrementGrade(3) ;
		std::cout << Alice ;
	}
	return 0 ;
}
