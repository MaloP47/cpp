/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:10:01 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:10:03 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

# define DEF_WA "Default WrongAnimal constructor called\n"
# define RAND_WA "Random WrongAnimal type"
# define DEST_WA "WrongAnimal class destructor called\n"
# define R_SOUND_WA " makes a random WrongAnimal sound.\n"
# define ANIMAL_CPY_WA "WrongAnimal class copy constructor called\n"

class	WrongAnimal {

	public:

		WrongAnimal( void ) ;
		WrongAnimal( WrongAnimal const & cpy ) ;
		virtual ~WrongAnimal( void ) ;
		WrongAnimal & operator=( WrongAnimal const & rhs ) ;

		const std::string &	getType( void ) const ;
		bool				setType( const std::string & set ) ;

		void				makeSound( void ) const ;

	protected:

		std::string	type ;
};

#endif /* WRONGANIMAL_HPP */
