/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:27:10 by root              #+#    #+#             */
/*   Updated: 2023/12/27 11:13:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

# define DEF_WCAT "Default WrongCat constructor called\n"
# define W_CAT "WrongCat"
# define DEST_WCAT "WrongCat class destructor called\n"
# define W_CAT_SOUND " meows but it sounds weird.\n"
# define W_CAT_CPY "WrongCat class copy constructor called\n"

class	WrongCat : public WrongAnimal {

	public:

		WrongCat( void ) ;
		WrongCat( WrongCat const & cpy) ;
		~WrongCat( void ) ;
		WrongCat & operator=( WrongCat const & rhs ) ;

		void	makeSound( void ) const ;
};

#endif /* WRONGCAT_HPP */
