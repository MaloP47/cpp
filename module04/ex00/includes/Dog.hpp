/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:24:24 by root              #+#    #+#             */
/*   Updated: 2023/12/24 13:46:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

# define DEF_DOG "Default Dog constructor called\n"
# define DOG "Dog"
# define DEST_DOG "Dog class destructor called\n"
# define DOG_SOUND " barks.\n"
# define DOG_CPY "Dog class copy constructor called\n"

class	Dog : public Animal {

	public:

		Dog( void ) ;
		Dog( Dog const & cpy ) ;
		~Dog( void ) ;
		Dog & operator=( Dog const & rhs ) ;

		void	makeSound( void ) const ;
};

#endif /* DOG_HPP */
