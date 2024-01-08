/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:40:28 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/08 13:00:20 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {

	public:

		MateriaSource( void ) ;
		MateriaSource( MateriaSource const & cpy ) ;
		~MateriaSource( void ) ;
		MateriaSource & operator=( MateriaSource const & rhs ) ;

		void		learnMateria( AMateria* ) ;
		AMateria*	createMateria( std::string const & type ) ;
};

/* MATERIASOURCE_HPP */
