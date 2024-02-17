/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:03:35 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/17 14:49:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

# define G2L_AForm "Form requires a higher grade to be used.\n"
# define G2H_AForm "Form requires a lower grade to be used.\n"
# define AForm_SIGNED "Form is already signed.\n"
# define AForm_NOT8SIGNED "Form is not signed yet, can't execute.\n"

class	Bureaucrat ;

class	AForm {

	public:

		AForm( void ) ;
		AForm( const std::string & name, int toSign, int toExecute ) ;
		virtual ~AForm( void ) ;
		AForm ( AForm const & cpy ) ;
		AForm & operator=( AForm const & rhs ) ;

		const std::string &	getName( void ) const ;
		const std::string &	getSignedBy( void ) const ;
		bool				getSigned( void ) const ;
		int					getToSign( void ) const ;
		int					getToExecute( void ) const ;

		void				setSigned( bool forceSignature ) ;

		void				beSigned( Bureaucrat const & approver ) ;
		void				execute( Bureaucrat const & executor ) const ;

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return G2H_AForm ;
				}
		} ;
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return G2L_AForm ;
				}
		} ;
		class	AFormIsAlreadySigned : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return AForm_SIGNED ;
				}
		} ;
		class	AFormIsNotSigned : public std::exception {
			public:
				virtual const char * what( void ) const throw() {
					return AForm_SIGNED ;
				}
		} ;

	private:

		const std::string	_name ;
		bool				_signed ;
		int					_toSign ;
		int					_toExecute ;	
		std::string			_signedBy ;
} ;

std::ostream & operator<<( std::ostream & os, AForm const & rhs ) ;

/* *** AFORM.HPP *** */
