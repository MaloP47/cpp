/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:22:40 by root              #+#    #+#             */
/*   Updated: 2023/12/29 14:38:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define DEF_CAT "Default Cat constructor called\n"
# define CAT "Cat"
# define DEST_CAT "Cat class destructor called\n"
# define CAT_SOUND " meows.\n"
# define CAT_CPY "Cat class copy constructor called\n"

class	Cat : public Animal {

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
