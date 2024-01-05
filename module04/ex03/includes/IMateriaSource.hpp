/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:41:35 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/05 11:15:45 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

 class	IMateriaSource {

	public:

		virtual ~IMateriaSource( void ) {}

		virtual void		learnMateria( AMateria* ) = 0 ;
		virtual AMateria	createMateria( std::string const & type ) = 0 ;
 };

#endif /* IMATERIASOURCE_HPP */
