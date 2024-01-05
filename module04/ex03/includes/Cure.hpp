/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:33:30 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/05 14:06:47 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

# define DEF_CURE "Default AMateria constructor called\n"
# define CURE_CPY "AMateria class copy constructor called\n"
# define DEST_AM "AMateria class destructor called\n"

class	Cure : public AMateria {

	public:

		Cure( void ) ;
		Cure( Cure const & cpy ) ;
		~Cure( void ) ;
		Cure & operator=( Cure const & rhs ) ;

		AMateria*	clone( void ) const ;
		void		use( ICharacter& target ) ;
};

#endif /* CURE_HPP */
