/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:36:23 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/12 09:42:05 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"
# include "ICharacter.hpp"

# define CHAR_CONST "Default CHARACTER constructor called\n"
# define CHAR_NAME "CHARACTER constructor called\n"
# define CHAR_CPY "CHARACTER class copy constructor called\n"
# define CHAR_DEST "CHARARCTER class destructor called\n"
# define MAT_ADDED "New Materia equipped by "
# define SIZE_LEFT " spot(s) available in her/his inventory.\n"
# define FULL_INV "\033[0;91mInventory full!!!\n\033[0;39m"
# define UNEQUIP_FAILED "\033[0;91mCan't unequip!!!\n\033[0;39m"
# define USE_FAILED "\033[0;91mCan't use Materia!!!\n\033[0;39m"

class	Character : public ICharacter {

	public:

		Character( void ) ;
		Character( std::string const & name ) ;
		Character( Character const & cpy ) ;
		~Character( void ) ;
		Character & operator=( Character const & rhs ) ;

		std::string const &	getName( void ) const ;
		int					getInventorySize( void ) const ;
		
		void 				equip( AMateria* m ) ;
		void 				unequip( int idx ) ;
		void 				use( int idx, ICharacter & target ) ;

	private:

		std::string		_name ;
		AMateria*		_inventory[4];
		unsigned int	_inventorySize;
};

/* CHARACTER_HPP */
