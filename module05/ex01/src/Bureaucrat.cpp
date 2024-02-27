/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:44:52 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/27 15:10:29 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* *** constructors *** */

Bureaucrat::Bureaucrat( void ) : _name( "Unknown" ), _grade( _lowestGrade ) {}

Bureaucrat::Bureaucrat( const std::string & name, unsigned int grade )
						: _name( name ), _grade( _lowestGrade ) {
		if ( grade < 1 )
			throw ( Bureaucrat::GradeTooHighException() ) ;
		else if ( grade > 150 )
			throw ( Bureaucrat::GradeTooLowException() ) ;
		else
			_grade = grade ;	
}

/* *** copy constructor *** */

Bureaucrat::Bureaucrat( Bureaucrat const & cpy ) 
						: _name( cpy._name ), _grade( cpy._grade ) {
}

/* *** destructor *** */

Bureaucrat::~Bureaucrat( void ) {}

/* *** operator = *** */

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {
	if ( this != &rhs )
		setGrade( rhs.getGrade() ) ;
	return *this ;
}

/* *** public functions *** */

const std::string &	Bureaucrat::getName( void ) const {
	return _name ;
}

int	Bureaucrat::getGrade( void ) const {
	return _grade ;
}

void	Bureaucrat::setGrade( int grade ) {
	if ( grade < 0 || grade > INT_MAX )
		return ;
	try {
		if ( grade > 150 )
			throw ( Bureaucrat::GradeTooLowException() ) ;
		else if ( grade < 1 )
			throw ( Bureaucrat::GradeTooHighException() ) ;
		else
			_grade = grade ;			
	}
	catch(const std::exception& e) {
		std::cout << e.what() << "Promotion candidate : " << *this ;
	}	
}

void	Bureaucrat::incrementGrade( int promotion ) {
	if ( promotion < 0 || promotion > INT_MAX )
		return ;
	for ( int i = 0; i < promotion; i++) {
		if ( _grade == 1) 
			return ;
		++*this ;
	}
}

void	Bureaucrat::decrementGrade( int sack ) {
	if ( sack < 0 || sack > INT_MAX )
		return ;
	for ( int i = 0; i < sack; i++) {
		if ( _grade == 150 )
			return ;
		--*this ;
	}
}

Bureaucrat&	Bureaucrat::operator++( void ) {
	try {
		if ( _grade > 1 )
			_grade--;
		else 
			throw ( Bureaucrat::GradeTooHighException() ) ;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << "Promotion candidate : " << *this ;
	}	
	return *this ;
}

Bureaucrat&	Bureaucrat::operator--( void ) {
	try {
		if ( _grade < 150 )
			_grade++;
		else
			throw ( Bureaucrat::GradeTooLowException() ) ;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << "Sack candidate : " << *this ;
	}
	return *this ;
}

void	Bureaucrat::signForm( Form & form ) {
	try {
		if ( form.getSigned() )
			throw Form::FormIsAlreadySigned() ;
		else if ( getGrade() > form.getToSign() )
			throw Form::GradeTooLowException() ;
		else {
			form.setSigned( true ) ;
			std::cout << getName() << " signed form " <<
			form.getName() << ".\n" ;
		}
	}
	catch( const std::exception& e ) {
		std::cout << getName() << " couldn't sign form " <<
		form.getName() << " because : " << e.what() ;
	}
}

/* *** private functions *** */

/* *** other *** */

std::ostream &	operator<<( std::ostream & os, Bureaucrat const & rhs ) {
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".\n" ;
	return os ;
}
