/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:39:12 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/09 11:00:13 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class AMateria;

class	ICharacter {

	public:

		virtual ~ICharacter( void ) {}

		virtual std::string const &	getName( void ) const = 0 ;
		virtual void 				equip( AMateria* m ) = 0 ;
		virtual void 				unequip( int idx ) = 0 ;
		virtual void 				use( int idx, ICharacter & target ) = 0 ;
};

/* ICHARACTER_HPP */
