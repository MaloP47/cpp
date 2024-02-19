/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:17:21 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/19 16:11:31 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* *** constructors *** */

Intern::Intern( void ) {}

/* *** copy constructor *** */

Intern::Intern( Intern const & cpy ) {
	( void )cpy ;
}

/* *** destructor *** */

Intern::~Intern( void ) {}

/* *** operator = *** */

Intern & Intern::operator=( Intern const & rhs ) {
	( void )rhs ;
	return *this ;
}

/* *** public functions *** */

AForm *	Intern::makeForm( const std::string & formName, const std::string & target ) {
	try {
		std::string	forms[3] = { "presidential pardon", "robotomy request", "shrubbery creation" } ;
		AForm * 	newForm = NULL ;
		int			index = -1 ;

		for ( int i = 0; i < 3; i++ ) {
			if ( !forms[i].compare( formName )) {
				index = i ;
				break ;
			}
			}
		switch ( index ) {
			case 0:
				newForm = new PresidentialPardonForm( target ) ;
				break ;
			case 1:
				newForm = new RobotomyRequestForm( target ) ;
				break ;
			case 2:
				newForm = new ShrubberryCreationForm( target ) ;
				break ; 
			default:
				throw Intern::unknownForm() ;
		}
		return newForm ;
	}
	catch ( const std::exception& e ) {
		std::cout << e.what() ;
		return NULL ;
	}
}

/* *** private functions *** */
/* *** other *** */
