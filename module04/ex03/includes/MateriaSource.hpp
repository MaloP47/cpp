/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:40:28 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/10 11:46:03 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

# define MS_CONST "Default MATERIASOURCE constructor called\n"
# define MS_CPY "MATERIASOURCE class copy constructor called\n"
# define MS_DEST "MATERIASOURCE class destructor called\n"
# define MAT_LEARNED "New Materia learned! "
# define SIZE_LEFT_S " spots available in the storage.\n"
# define FULL_STORAGE "\033[0;91mStorage full!!!\n\033[0;39m"

class	MateriaSource : public IMateriaSource {

	public:

		MateriaSource( void ) ;
		MateriaSource( MateriaSource const & cpy ) ;
		~MateriaSource( void ) ;
		MateriaSource & operator=( MateriaSource const & rhs ) ;

		void		learnMateria( AMateria* ) ;
		AMateria*	createMateria( std::string const & type ) ;
		int			getSize( void ) const ;

	private:

		AMateria*		_stored[4] ;
		unsigned int	_size ;
};

/* MATERIASOURCE_HPP */
