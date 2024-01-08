/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:41:35 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/08 13:00:08 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

 class	IMateriaSource {

	public:

		virtual ~IMateriaSource( void ) {}

		virtual void		learnMateria( AMateria* ) = 0 ;
		virtual AMateria*	createMateria( std::string const & type ) = 0 ;
 };

/* IMATERIASOURCE_HPP */
