/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:12:24 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/15 15:46:18 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>
# include <climits>

# define G2L_EXC "Bureaucrat grade can't rank lower than 150.\n"
# define G2H_EXC "Bureaucrat grade can't rank higher than 1.\n"

class	Bureaucrat {

	public:

		Bureaucrat( void ) ;
		Bureaucrat( const std::string & name, unsigned int grade ) ;
		~Bureaucrat( void ) ;
		Bureaucrat( Bureaucrat const & cpy ) ;

		const std::string &	getName( void ) const ;
		unsigned int		getGrade( void ) const ;

		void				setGrade( int grade ) ;

		void				incrementGrade( int promotion ) ;			//Improve the grade, 1 being the best grade
		void				decrementGrade( int sack ) ;

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
		unsigned int		_grade ;
};

std::ostream & operator<<( std::ostream & os, Bureaucrat const & rhs ) ;

/* *** BUREAUCRAT.HPP *** */
