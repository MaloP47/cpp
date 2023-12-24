
#include "Template.hpp"

/* *** constructors *** */

Template::Template( void ) {
	//
}

Template::Template( void * value) : _variable( value ) {
	//
}

/* *** copy constructor *** */

Template::Template( Template const & cpy ) {
	//
	*this = cpy ;
}

/* *** destructor *** */

Template::~Template( void ) {
	//
}

/* *** operator = *** */

Template &	Template::operator=( Template const & rhs ) {
	if ( this != &rhs ) {
		_variable = rhs.getVariable() ;
	}
	return *this ;
}

/* *** public functions *** */

/* GETTERS */

void *	Template::getVariable( void ) const {
	return _variable ;
}

/* SETTERS */

bool	Template::setVariable( void * value ) {
	//
	_variable = value ;
	return true ;
}

/* *** protected functions *** */
/* *** private functions *** */
/* *** other *** */
