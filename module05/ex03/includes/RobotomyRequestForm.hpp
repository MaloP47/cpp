/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:33:53 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/19 14:20:06 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"
# include <cstdlib>

class	RobotomyRequestForm : public AForm {

	public:

		RobotomyRequestForm( void ) ;
		RobotomyRequestForm( const std::string & target ) ;
		~RobotomyRequestForm( void ) ;
		RobotomyRequestForm( RobotomyRequestForm const & cpy ) ;
		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs ) ;

		const std::string & getTarget( void ) const ;

	private:

		static const int	_requieredSign = 72 ;
		static const int	_requieredExecute = 45 ;

		std::string			_target ;

		void	executeAction( void ) const ;

} ;

/* *** ROBOTOMYREQUESTFORM.HPP *** */
