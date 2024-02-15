/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:44:52 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/15 15:49:21 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* *** constructors *** */

Bureaucrat::Bureaucrat( void ) : _name( "Unknown" ), _grade( _lowestGrade ) {}

Bureaucrat::Bureaucrat( const std::string & name, unsigned int grade )
						: _name( name ), _grade( _lowestGrade ) {
	try {
		if ( grade < 1 )
			throw ( Bureaucrat::GradeTooHighException() ) ;
		else if ( grade > 150 )
			throw ( Bureaucrat::GradeTooLowException() ) ;
		else
			_grade = grade ;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() ;
	}
	
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

unsigned int	Bureaucrat::getGrade( void ) const {
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
		std::cerr << e.what() << "Promotion candidate : " << *this ;
	}	
}

void	Bureaucrat::incrementGrade( int promotion ) {
	if ( promotion < 0 || promotion > INT_MAX )
		return ;
	for ( int i = 0; i < promotion; i++) {
		++*this ;
	}
}

void	Bureaucrat::decrementGrade( int sack ) {
	if ( sack < 0 || sack > INT_MAX )
		return ;
	for ( int i = 0; i < sack; i++) {
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
		std::cerr << e.what() << "Promotion candidate : " << *this ;
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
		std::cerr << e.what() << "Sack candidate : " << *this ;
	}
	return *this ;
}

/* *** private functions *** */

/* *** other *** */

std::ostream &	operator<<( std::ostream & os, Bureaucrat const & rhs ) {
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".\n" ;
	return os ;
}
