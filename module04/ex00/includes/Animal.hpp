/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:09:33 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:09:35 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

# define DEF "Default Animal constructor called\n"
# define RAND "Random animal type"
# define DEST "Animal class destructor called\n"
# define R_SOUND " makes a random animal sound.\n"
# define ANIMAL_CPY "Animal class copy constructor called\n"

class	Animal {

	public:

		Animal( void ) ;
		Animal( Animal const & cpy ) ;
		virtual ~Animal( void ) ;
		Animal & operator=( Animal const & rhs ) ;

		const std::string &	getType( void ) const ;
		bool				setType( const std::string & set ) ;

		virtual void		makeSound( void ) const ;

	protected:

		std::string	type ;

};

#endif /* ANIMAL_HPP */
