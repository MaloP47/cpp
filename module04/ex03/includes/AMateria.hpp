/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:08:02 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/04 14:03:10 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class	AMateria {

	public:

		AMateria( void ) ;
		AMateria( std::string const & type ) ;
		
		
		std::string const &	getType( void ) const ;
		
		virtual AMateria*	clone( void ) const = 0 ;
		virtual void		use( Icharacter& target ) ;

	protected:

		
};

#endif /* AMATERIA_HPP */
