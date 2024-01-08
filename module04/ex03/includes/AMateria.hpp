/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:08:02 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/08 13:10:15 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "ICharacter.hpp"

# define DEF_AM "Default AMateria constructor called\n"
# define TYPE_CONSTRUCTOR "Type constructor called\n"
# define AMATERIA_CPY "AMateria class copy constructor called\n"
# define DEST_AM "AMateria class destructor called\n"

class ICharacter;

class	AMateria {

	public:

		AMateria( void ) ;
		AMateria( std::string const & type ) ;
		AMateria( AMateria const & cpy ) ;
		~AMateria( void ) ;
		AMateria & operator=( AMateria const & rhs ) ;
		
		
		std::string const &	getType( void ) const ;
		
		virtual AMateria*	clone( void ) const = 0 ;
		virtual void		use( ICharacter & target ) ;

	protected:

		std::string	_type;
		
};

/* AMATERIA_HPP */
