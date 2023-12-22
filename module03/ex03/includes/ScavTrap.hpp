/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:48:58 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/22 10:35:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define DEF_SCAV "(ScavTrap) Default constructor called "
# define COPY_SCAV "(ScavTrap) Copy constructor called "
# define CONST_SCAV "(ScavTrap) Constructor called "
# define DEST_SCAV "(ScavTrap) Destructor called "
# define SCAV "ScavTrap "
# define CT_G " can't activate guard mode "
# define GUARD " is now in Gate Keeper mode.\n"

class	ScavTrap : virtual public ClapTrap {

	public:

		ScavTrap( void );								//Coplien default constructor
		ScavTrap( const std::string & name );
		ScavTrap( ScavTrap const & cpy );				//Coplien copy constructor
		~ScavTrap( void );								//Coplien destructor
		ScavTrap & operator=( ScavTrap const & rhs );	//Coplien copy assignement operator

		void	attack( std::string & target);
		void	guardGate( void );
};

#endif /* SCAVTRAP_HPP */
