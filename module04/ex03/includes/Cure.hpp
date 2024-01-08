/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:33:30 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/08 12:59:23 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

# define DEF_CURE "Default CURE constructor called\n"
# define CURE_CPY "CURE class copy constructor called\n"
# define DEST_CURE "CURE class destructor called\n"

class	Cure : public AMateria {

	public:

		Cure( void ) ;
		Cure( Cure const & cpy ) ;
		~Cure( void ) ;
		Cure & operator=( Cure const & rhs ) ;

		AMateria*	clone( void ) const ;
		void		use( ICharacter& target ) ;
};

/* CURE_HPP */
