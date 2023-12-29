
#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

class	Template {

	public:

		Template( void ) ;								//Coplien default constructor
		Template( void * value) ;
		Template( Template const & cpy ) ; 				//Coplien copy constructor
		~Template( void ) ; 							//Coplien destructor
		Template &	operator=( Template const & rhs ) ; //Coplien copy assignement operator

		void *	getVariable( void ) const ;				//GETTER
		bool	setVariable( void * value ) ;			//SETTER

	protected:

		//

	private:

		void	*_variable ;
};

#endif /* TEMPLATE_HPP */
