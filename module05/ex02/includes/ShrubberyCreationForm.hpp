/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:19:47 by root              #+#    #+#             */
/*   Updated: 2024/02/17 14:35:25 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class	Bureaucrat ;

class	ShrubberryCreationForm : public AForm {

	public:

		ShrubberryCreationForm( void ) ;
		ShrubberryCreationForm( const std::string & target ) ;
		~ShrubberryCreationForm( void ) ;
		ShrubberryCreationForm( ShrubberryCreationForm const & cpy ) ;
		ShrubberryCreationForm & operator=( ShrubberryCreationForm const & rhs ) ;
		
	private :

		static const int			_requieredSign = 145 ;
		static const int			_requieredExecute = 137 ;
		static const std::string	_tree ; 
		
		std::string &				_target ;

} ;

/* *** SHRUBBERYCREATIONFORM.HPP *** */