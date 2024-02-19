/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:07:41 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/19 15:00:15 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void ) {
	
	{
		Bureaucrat				Alice("Alice", 150) ;
		ShrubberryCreationForm	Shrub("Here") ;

		std::cout << Shrub ;
		std::cout << Shrub.getTarget() ;
		Alice.executeForm( Shrub ) ;
		Alice.incrementGrade( 50 ) ;
		std::cout << Alice ;
		Alice.executeForm( Shrub ) ;
		Alice.signForm( Shrub ) ;
		Alice.executeForm( Shrub ) ;
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat			Bob("Bob", 50) ;
		RobotomyRequestForm	Robotomy("Charlie") ;
		RobotomyRequestForm	testCpy(Robotomy) ;
		RobotomyRequestForm	testEqual;

		std::cout << testEqual ;
		testEqual = Robotomy ;
		std::cout << testEqual.getTarget() << std::endl ;
		Robotomy.beSigned( Bob ) ;
		Bob.decrementGrade( 1000 ) ;
		std::cout << Bob ;
		Bob.executeForm( Robotomy ) ;
		Bob.incrementGrade( 1000 ) ;
		std::cout << Bob ;
		Bob.executeForm( Robotomy ) ;
		Bob.executeForm( Robotomy ) ;
		Bob.executeForm( Robotomy ) ;
		Bob.executeForm( Robotomy ) ;
		Bob.executeForm( Robotomy ) ;
	}
	std::cout << "-------------------------\n" ;
	{
		Bureaucrat				David( "David", 25 ) ;
		Bureaucrat				Eric( "Eric", 5 ) ;
		PresidentialPardonForm	Presidential( "Guilty person" ) ;

		std::cout << Presidential ;
		Presidential.beSigned( David ) ;
		std::cout << Presidential ;
		Eric.executeForm( Presidential ) ;
	}
	
	return 0 ;
}
