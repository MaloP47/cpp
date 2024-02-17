/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:48:58 by root              #+#    #+#             */
/*   Updated: 2024/02/17 14:35:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ShrubberyCreationForm.hpp"

/* *** constructors *** */

ShrubberryCreationForm::ShrubberryCreationForm( void ) : AForm( "Shrubbery form", 145, 137 ),
														 _target( "Random target" ) {

}

ShrubberryCreationForm::ShrubberryCreationForm( const std::string & target ) : AForm( "Shrubbery form", 145, 137 ),
																				_target( target ) {
	
}

/* *** copy constructor *** */

ShrubberryCreationForm::ShrubberryCreationForm( ShrubberryCreationForm const & cpy ) : AForm( cpy ),
																						_target( cpy._target ) {
	
}

/* *** destructor *** */

ShrubberryCreationForm::~ShrubberryCreationForm( void ) {}

/* *** operator = *** */

ShrubberryCreationForm & ShrubberryCreationForm::operator=( ShrubberryCreationForm const & rhs ) {
	_target = rhs._target ;
	return *this ;
}

/* *** public functions *** */

/* *** private functions *** */
/* *** other *** */

const std::string ShrubberryCreationForm::_tree = 
		"   *   \n"
        "  ***  \n"
        " ***** \n"
        "*******\n"
        "  | |  \n" ;
