/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:10:00 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/21 13:32:00 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define DEF_FRAG "(FragTrap) Default constructor called "
# define COPY_FRAG "(FragTrap) Copy constructor called "
# define CONST_FRAG "(FragTrap) Constructor called "
# define DEST_FRAG "(FragTrap) Destructor called "
# define FRAG "FragTrap "
# define CT_H " can't high five "
# define H5 " is requesting a high five!\n"

class   FragTrap : public ClapTrap {

	public:

		FragTrap( void );								//Coplien default constructor
		FragTrap( const std::string & name );
		FragTrap( FragTrap const & cpy );				//Coplien copy constructor
		~FragTrap( void );								//Coplien destructor
		FragTrap & operator=( FragTrap const & rhs );	//Coplien copy assignement operator

		void	highFivesGuys( void );
};

#endif /* FRAGTRAP_HPP */
