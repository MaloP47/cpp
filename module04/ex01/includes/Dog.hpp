/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:14:07 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:14:10 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

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

	private:

		Brain*	_dogBrain ;
};

#endif /* DOG_HPP */