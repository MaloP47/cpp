/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:12:24 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/17 13:18:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>
# include <climits>
# include "AForm.hpp"

# define G2L_EXC "Bureaucrat grade can't rank lower than 150.\n"
# define G2H_EXC "Bureaucrat grade can't rank higher than 1.\n"

class	AForm ;

class	Bureaucrat {

	public:

		Bureaucrat( void ) ;
		Bureaucrat( const std::string & name, int grade ) ;
		~Bureaucrat( void ) ;
		Bureaucrat( Bureaucrat const & cpy ) ;

		const std::string &	getName( void ) const ;
		int					getGrade( void ) const ;

		void				setGrade( int grade ) ;

		void				incrementGrade( int promotion ) ;			//Improve the grade, 1 being the best grade
		void				decrementGrade( int sack ) ;

		void				signForm( AForm & form) ;
		void				executeForm( AForm const & form ) ;

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return G2H_EXC ;
				}
		} ;
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return G2L_EXC ;
				}
		} ;
		
		Bureaucrat &	operator=( Bureaucrat const & rhs ) ;
		Bureaucrat &	operator++( void ) ;
		Bureaucrat &	operator--( void ) ;

	private:


		static const int	_highestGrade = 1 ;
		static const int	_lowestGrade = 150 ;
		
		const std::string	_name ;
		int					_grade ;
} ;

std::ostream & operator<<( std::ostream & os, Bureaucrat const & rhs ) ;

/* *** BUREAUCRAT.HPP *** */
