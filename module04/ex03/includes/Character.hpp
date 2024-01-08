/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:36:23 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/08 13:09:12 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define CHAR_CONST "Default CHARACTER constructor called\n"
# define CHAR_NAME "CHARACTER constructor called\n"
# define CHAR_CPY "CHARACTER class copy constructor called\n"
# define CHAR_DEST "CHARARCTER class destructor called\n"

class	AMateria;

class	Character : public ICharacter {

	public:

		Character( void ) ;
		Character( std::string const & name ) ;
		Character( Character const & cpy ) ;
		~Character( void ) ;
		Character & operator=( Character const & rhs ) ;

		std::string const &	getName( void ) const ;
		
		void 				equip( AMateria* m ) ;
		void 				unequip( int idx ) ;
		void 				use( int idx, Icharacter & target ) ;

	private:

		std::string	_name ;
		AMateria*	_inventory[4];
};

/* CHARACTER_HPP */
