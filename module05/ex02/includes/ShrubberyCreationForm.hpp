/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:19:47 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/01 16:40:37 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"
# include <string>
# include <fstream>

class	ShrubberryCreationForm : public AForm {

	public:

		ShrubberryCreationForm( void ) ;
		ShrubberryCreationForm( const std::string & target ) ;
		~ShrubberryCreationForm( void ) ;
		ShrubberryCreationForm( ShrubberryCreationForm const & cpy ) ;
		ShrubberryCreationForm & operator=( ShrubberryCreationForm const & rhs ) ;

		const std::string & getTarget( void ) const ;

		
	private :

		static const int			_requieredSign = 145 ;
		static const int			_requieredExecute = 137 ;
		static const std::string	_tree ; 
		
		std::string					_target ;

		void	executeAction( void ) const ;
} ;

/* *** SHRUBBERYCREATIONFORM.HPP *** */
