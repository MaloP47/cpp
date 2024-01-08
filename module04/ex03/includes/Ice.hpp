/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:28:08 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/08 12:59:36 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

# define DEF_ICE "Default ICE constructor called\n"
# define ICE_CPY "ICE class copy constructor called\n"
# define DEST_ICE "ICE class destructor called\n"

class	Ice : public AMateria {

	public:

		Ice( void ) ;
		Ice( Ice const & cpy ) ;
		~Ice( void ) ;
		Ice & operator=( Ice const & rhs ) ;

		AMateria*	clone( void ) const ;
		void		use( ICharacter& target ) ;
};

/* ICE_HPP */
