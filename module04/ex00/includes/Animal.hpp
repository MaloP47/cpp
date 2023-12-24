/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:21:36 by root              #+#    #+#             */
/*   Updated: 2023/12/24 12:34:11 by root             ###   ########.fr       */
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
