/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:44:52 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/18 18:39:39 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* *** constructors *** */

Bureaucrat::Bureaucrat( void ) : _name( "Unknown" ), _grade( 150 ) {}

Bureaucrat::Bureaucrat( const std::string & name, unsigned int grade )
						: _name( name ), _grade( grade ) {	
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

void	Bureaucrat::setGrade( unsigned int grade ) {
	_grade = grade ;
}

void	Bureaucrat::incrementGrade( int ) {
	
}

void	Bureaucrat::decrementGrade( int ) {
	
}

/* *** private functions *** */

Bureaucrat	Bureaucrat::operator++( int ) {

}

Bureaucrat	Bureaucrat::operator--( int ) {
	
}

/* *** other *** */

std::ostream &	operator<<( std::ostream & os, Bureaucrat const & rhs ) {
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".\n" ;
	return os ;
}
