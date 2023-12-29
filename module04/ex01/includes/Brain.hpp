/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:31:16 by root              #+#    #+#             */
/*   Updated: 2023/12/29 11:24:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define DEF_B "Default Brain constructor called\n"
# define DEST_B "Brain class destructor called\n"
# define BRAIN_CPY "Brain class copy constructor called\n"
# define ERR_GET "\033[0;91mInvalid index, value returned is index[0].\n\033[0;39m"
# define ERR_SET "\033[0;91mInvalid index, Idea was not set.\n\033[0;39m"

# define NB_IDEAS 100u

class	Brain {

	public:

		Brain( void ) ;
		Brain( Brain const & cpy ) ;
		~Brain( void ) ;
		Brain & operator=( Brain const & rhs ) ;

		const std::string & getIdeas( int index ) const ;
		bool				setIdeas( int index, std::string const & idea ) ;

		std::string	ideas[NB_IDEAS] ;
};

#endif /* BRAIN_HPP */
