/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:15:17 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:15:20 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

# define DEF_CAT "Default Cat constructor called\n"
# define CAT "Cat"
# define DEST_CAT "Cat class destructor called\n"
# define CAT_SOUND " meows.\n"
# define CAT_CPY "Cat class copy constructor called\n"

class	Cat : public AAnimal {

	public:

		Cat( void ) ;
		Cat( Cat const & cpy) ;
		~Cat( void ) ;
		Cat & operator=( Cat const & rhs ) ;

		void	makeSound( void ) const ;

	private:

		Brain*	_catBrain ;
};

#endif /* CAT_HPP */
