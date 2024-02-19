/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:43:52 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/19 14:48:10 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm {

	public:

		PresidentialPardonForm( void ) ;
		PresidentialPardonForm( const std::string & target ) ;
		~PresidentialPardonForm( void ) ;
		PresidentialPardonForm( PresidentialPardonForm const & cpy ) ;
		PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs ) ;

		const std:: string &	getTarget( void ) const ;

	private:

		static const int	_requieredSign = 25 ;
		static const int	_requieredExecute = 5 ;
		
		std::string			_target ;

		void	executeAction( void ) const ;
} ;

/* *** PRESIDENTIALPARDONFORM.HPP *** */
