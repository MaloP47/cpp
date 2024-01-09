/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:40:28 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/09 11:21:26 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

# define MS_CONST "Default MATERIASOURCE constructor called\n"
# define MS_CPY "MATERIASOURCE class copy constructor called\n"
# define MS_DEST "MATERIASOURCE class destructor called\n"

class	MateriaSource : public IMateriaSource {

	public:

		MateriaSource( void ) ;
		MateriaSource( MateriaSource const & cpy ) ;
		~MateriaSource( void ) ;
		MateriaSource & operator=( MateriaSource const & rhs ) ;

		void		learnMateria( AMateria* ) ;
		AMateria*	createMateria( std::string const & type ) ;

	private:

		AMateria*	_stored[4];
};

/* MATERIASOURCE_HPP */
