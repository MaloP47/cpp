/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:48:46 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/19 14:55:01 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* *** constructors *** */

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm( "Presidential form", _requieredSign, _requieredExecute ),
													_target( "Random target" ) {
}

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ) : AForm( "Presidential form", _requieredSign, _requieredExecute ),
																			_target( target ) {
}

/* *** copy constructor *** */

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & cpy ) : AForm( cpy ),
																				_target( cpy.getTarget() ) {
}
																				
/* *** destructor *** */

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

/* *** operator = *** */

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	_target = rhs.getTarget() ;
	return *this ;
}

/* *** public functions *** */

const std::string & PresidentialPardonForm::getTarget( void ) const {
	return _target ;
}

/* *** private functions *** */
/* *** other *** */

void	PresidentialPardonForm::executeAction( void ) const {
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox.\n" ;
}
