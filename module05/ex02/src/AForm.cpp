/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:06:05 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/16 16:06:07 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* *** constructors *** */

AForm::AForm( void ) : _name( "Random" ), _signed( false ),
						_toSign( 150 ), _toExecute( 150 ),
						_signedBy( "Not signed") {
}

AForm::AForm( const std::string & name, int toSign, int toExecute ) : 
						_name( name ), _signed( false ), 
						_signedBy( "Not signed" ) {
	try {
		if ( toSign < 1 || toExecute < 1)
			throw  AForm::GradeTooHighException()  ;
		else if ( toSign > 150 || toExecute > 150 )
			throw  AForm::GradeTooLowException()  ;
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

AForm::AForm ( AForm const & cpy ) : _name( cpy._name), _signed( false ), 
									_toSign( cpy._toSign ),
									 _toExecute( cpy._toExecute ), 
									 _signedBy( "Not signed") {
	
}

/* *** destructor *** */

AForm::~AForm( void ) {
	
}

/* *** operator = *** */

AForm & AForm::operator=( AForm const & rhs ) {
	if ( this != &rhs ) {
		_signed = rhs.getSigned() ;
		_toSign = rhs.getToSign() ;
		_toExecute = rhs.getToExecute() ;
		_signedBy = rhs.getSignedBy() ;		
	}
	return *this ;
}

/* *** public functions *** */

const std::string &	AForm::getName( void ) const {
	return _name ;
}

const std::string &	AForm::getSignedBy( void ) const {
	return _signedBy ;
}

bool	AForm::getSigned( void ) const {
	return _signed ;
}

int	AForm::getToSign( void ) const {
	return _toSign ;
}

int	AForm::getToExecute( void ) const {
	return _toExecute ;
}

void	AForm::setSigned( bool forceSignature ) {
	_signed = forceSignature ;
}

void	AForm::beSigned( Bureaucrat const & approver ) {
	try {
		if ( _signed )
			throw AForm::AFormIsAlreadySigned() ;
		if ( approver.getGrade() > _toSign )
			throw AForm::GradeTooLowException() ;
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

std::ostream & operator<<( std::ostream & os, AForm const & rhs ) {
	os << rhs.getName() << " AForm, requires a grade " << rhs.getToSign() << " to be signed,"
	<< " requires a grade " << rhs.getToExecute() << " to execute." << "\nSigned by : "
	<< rhs.getSignedBy() << ".\n" ;
	return os ;
}
