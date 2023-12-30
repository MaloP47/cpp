/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:21:36 by root              #+#    #+#             */
/*   Updated: 2023/12/24 12:34:11 by root             ###   ########.fr       */
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
