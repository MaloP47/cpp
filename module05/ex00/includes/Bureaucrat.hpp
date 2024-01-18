/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:12:24 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/18 18:39:23 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class	Bureaucrat {

	public:

		Bureaucrat( const std::string & name, unsigned int grade ) ;
		~Bureaucrat( void ) ;
		Bureaucrat( Bureaucrat const & cpy ) ;
		Bureaucrat & operator=( Bureaucrat const & rhs ) ;

		const std::string &	getName( void ) const ;
		unsigned int		getGrade( void ) const ;

		void				setGrade( unsigned int grade ) ;

		void				incrementGrade( int promotion ) ;			//Improve the grade, 1 being the best grade
		void				decrementGrade( int sack ) ;

	private:

		Bureaucrat( void ) ;

		Bureaucrat 	operator++( int ) ;
		Bureaucrat	operator--( int ) ;
		
		const std::string	_name ;
		unsigned int		_grade ;
};

std::ostream & operator<<( std::ostream & os, Bureaucrat const & rhs ) ;

/* *** BUREAUCRAT.HPP *** */
