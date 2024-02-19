/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:07:41 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/19 16:25:06 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void ) {
	
	{
		Intern	Uk ;
		Intern	testCpy(Uk) ;
		Intern	testEqual ;

		testEqual = Uk ;
	}
	{
		Intern		someRandomIntern ;
		Bureaucrat	Alice( "Alice", 1 ) ;
		AForm*		rrf ;
		AForm*		a ;
		AForm*		b ;
		AForm*		c ;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender") ;
		b = someRandomIntern.makeForm("shrubbery creation", "b") ;
		c = someRandomIntern.makeForm("presidential pardon", "c") ;

		std::cout << *rrf ;
		std::cout << *b ;
		std::cout << *c ;

		Alice.signForm( *b ) ;
		Alice.executeForm( *b ) ;

		delete rrf ;
		delete b;
		delete c;
		
		a = someRandomIntern.makeForm("robotomy ", "a") ;
	}
	
	return 0 ;
}
