/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:00:18 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/16 15:35:21 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* *** constructors *** */

Form::Form( void ) : _name( "Random" ), _signed( false ),
						_toSign( 150 ), _toExecute( 150 ),
						_signedBy( "Not signed") {
}

Form::Form( const std::string & name, int toSign, int toExecute ) : 
						_name( name ), _signed( false ), 
						_signedBy( "Not signed" ) {
	try {
		if ( toSign < 1 || toExecute < 1)
			throw  Form::GradeTooHighException()  ;
		else if ( toSign > 150 || toExecute > 150 )
			throw  Form::GradeTooLowException()  ;
		else {
			_toSign = toSign ;
			_toExecute = toExecute ;
		}
	}
	catch( const std::exception& e ) {
		std::cout << e.what() ;
	}
}

/* *** copy constructor *** */

Form::Form ( Form const & cpy ) : _name( cpy._name), _signed( false ), 
									_toSign( cpy._toSign ),
									 _toExecute( cpy._toExecute ), 
									 _signedBy( "Not signed") {
	
}

/* *** destructor *** */

Form::~Form( void ) {
	
}

/* *** operator = *** */

Form & Form::operator=( Form const & rhs ) {
	if ( this != &rhs ) {
		_signed = rhs.getSigned() ;
		_toSign = rhs.getToSign() ;
		_toExecute = rhs.getToExecute() ;
		_signedBy = rhs.getSignedBy() ;		
	}
	return *this ;
}

/* *** public functions *** */

const std::string &	Form::getName( void ) const {
	return _name ;
}

const std::string &	Form::getSignedBy( void ) const {
	return _signedBy ;
}

bool	Form::getSigned( void ) const {
	return _signed ;
}

int	Form::getToSign( void ) const {
	return _toSign ;
}

int	Form::getToExecute( void ) const {
	return _toExecute ;
}

void	Form::setSigned( bool forceSignature ) {
	_signed = forceSignature ;
}

void	Form::beSigned( Bureaucrat const & approver ) {
	try {
		if ( _signed )
			throw Form::FormIsAlreadySigned() ;
		if ( approver.getGrade() > _toSign )
			throw Form::GradeTooLowException() ;
		else {
			_signed = true ;
			_signedBy = approver.getName() ;
		}
	}
	catch( const std::exception& e ) {
		std::cout << e.what() ;
	}
}

/* *** private functions *** */

/* *** other *** */

std::ostream & operator<<( std::ostream & os, Form const & rhs ) {
	os << rhs.getName() << " form, requires a grade " << rhs.getToSign() << " to be signed,"
	<< " requires a grade " << rhs.getToExecute() << " to execute." << "\nSigned by : "
	<< rhs.getSignedBy() << ".\n" ;
	return os ;
}
