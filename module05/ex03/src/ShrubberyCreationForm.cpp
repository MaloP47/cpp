/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:34:07 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/19 13:49:32 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ShrubberyCreationForm.hpp"

/* *** constructors *** */

ShrubberryCreationForm::ShrubberryCreationForm( void ) : AForm( "Shrubbery form", _requieredSign, _requieredExecute ),
														 _target( "Random target" ) {

}

ShrubberryCreationForm::ShrubberryCreationForm( const std::string & target ) : AForm( "Shrubbery form", _requieredSign, _requieredExecute ),
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

const std::string &	ShrubberryCreationForm::getTarget( void ) const {
	return _target ;
}

/* *** private functions *** */
/* *** other *** */

void	ShrubberryCreationForm::executeAction( void ) const {
	std::string fileName = getTarget() + "_shrubbery" ;
	try {
		std::ofstream file( fileName.c_str(), std::ios::out ) ;
		if ( !file.is_open() )
			throw std::runtime_error( "Error while opening file " + fileName ) ;
		file << _tree ;
		file.close() ;
	}
	catch ( const std::exception& e ) {
		std::cout << e.what() << std::endl ;
	}
}

const std::string ShrubberryCreationForm::_tree = 
		"   *   \n"
        "  ***  \n"
        " ***** \n"
        "*******\n"
        "  | |  \n" ;
