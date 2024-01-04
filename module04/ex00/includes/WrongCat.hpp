/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:10:09 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:10:11 by mpeulet          ###   ########.fr       */
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
