/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:46:30 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/19 14:15:47 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* *** constructors *** */

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm( "Robotomy form", _requieredSign, _requieredExecute ),
													_target( "Random target" ) {
}

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ) : AForm( "Robotomy form", _requieredSign, _requieredExecute ),
																			_target( target ) {
}

/* *** copy constructor *** */

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & cpy ) : AForm( cpy ),
																				_target( cpy.getTarget() ) {
}

/* *** destructor *** */

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

/* *** operator = *** */

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	_target = rhs.getTarget() ;
	return *this ;
}

/* *** public functions *** */

const std::string & RobotomyRequestForm::getTarget( void ) const {
	return _target ;
}

/* *** private functions *** */
/* *** other *** */

void	RobotomyRequestForm::executeAction( void ) const {
	std::cout << "Bzzz .. DRRR... ZZZZZzzzz ...\n" ;
	if ( std::rand() % 2 )
		std::cout << getTarget() << " has been robotomized successfully.\n" ;
	else
		std::cout << "Robotomy failed on " << getTarget() << ".\n" ; 
}
