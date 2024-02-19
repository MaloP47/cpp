/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:05:36 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/19 16:00:24 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp" 	

# define UNKNOWN_FORM "I don't know the requested form, I'd rather go make a coffee.\n"

class	Intern {

	public:

		Intern( void ) ;
		Intern( Intern const & cpy ) ;
		~Intern( void ) ;
		Intern & operator=( Intern const & rhs ) ;

		class	unknownForm : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return UNKNOWN_FORM ;
				}
		} ;

		AForm *	makeForm( const std::string & formName, const std::string & target ) ;
} ;

/* *** INTERN.HPP *** */
