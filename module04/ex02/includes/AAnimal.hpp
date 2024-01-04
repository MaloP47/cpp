/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:14:27 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:14:30 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>
#include <string>

# define DEF "Default AAnimal constructor called\n"
# define RAND "Random AAnimal type"
# define DEST "AAnimal class destructor called\n"
# define R_SOUND " makes a random AAnimal sound.\n"
# define AAnimal_CPY "AAnimal class copy constructor called\n"

class	AAnimal {

	public:

		AAnimal( void ) ;
		AAnimal( AAnimal const & cpy ) ;
		virtual ~AAnimal( void ) ;
		AAnimal & operator=( AAnimal const & rhs ) ;

		const std::string &	getType( void ) const ;
		bool				setType( const std::string & set ) ;

		virtual void		makeSound( void ) const = 0 ;

	protected:

		std::string	type ;

};

#endif /* AAnimal_HPP */
