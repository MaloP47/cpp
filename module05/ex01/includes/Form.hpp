/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:59:51 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/16 15:45:23 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

# define G2L_FORM "Form requires a higher grade to be used.\n"
# define G2H_FORM "Form requires a lower grade to be used.\n"
# define FORM_SIGNED "Form is already signed.\n"

class	Bureaucrat ;

class	Form {

	public:

		Form( void ) ;
		Form( const std::string & name, int toSign, int toExecute ) ;
		~Form( void ) ;
		Form ( Form const & cpy ) ;
		Form & operator=( Form const & rhs ) ;

		const std::string &	getName( void ) const ;
		const std::string &	getSignedBy( void ) const ;
		bool				getSigned( void ) const ;
		int					getToSign( void ) const ;
		int					getToExecute( void ) const ;

		void				setSigned( bool forceSignature ) ;

		void				beSigned( Bureaucrat const & approver ) ;

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return G2H_FORM ;
				}
		} ;
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return G2L_FORM ;
				}
		} ;
		class	FormIsAlreadySigned : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return FORM_SIGNED ;
				}
		} ;

	private:

		const std::string	_name ;
		bool				_signed ;
		int					_toSign ;
		int					_toExecute ;	
		std::string			_signedBy ;
} ;

std::ostream & operator<<( std::ostream & os, Form const & rhs ) ;

/* *** FORM.HPP *** */
