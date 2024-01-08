/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:39:12 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/08 13:00:48 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class AMateria;

class	Icharacter {

	public:

		virtual ~Icharacter( void ) {}

		virtual std::string const &	getName( void ) const = 0 ;
		virtual void 				equip( AMateria* m ) = 0 ;
		virtual void 				unequip( int idx ) = 0 ;
		virtual void 				use( int idx, Icharacter & target ) = 0 ;
};

/* ICHARACTER_HPP */
