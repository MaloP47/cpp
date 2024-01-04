/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:06:42 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:06:49 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# define DEF_DIAM "(DiamondTrap) Default constructor called "
# define COPY_DIAM "(DiamondTrap) Copy constructor called "
# define CONST_DIAM "(DiamondTrap) Constructor called "
# define DEST_DIAM "(DiamondTrap) Destructor called "
# define DIAM "DiamondTrap "

class	DiamondTrap : public FragTrap, public ScavTrap {

	public:

		DiamondTrap( void );								//Coplien default constructor
		DiamondTrap( const std::string & name );
		DiamondTrap( DiamondTrap const & cpy );				//Coplien copy constructor
		~DiamondTrap( void );								//Coplien destructor
		DiamondTrap & operator=( DiamondTrap const & rhs );	//Coplien copy assignement operator

		using	ScavTrap::attack ;
		void	whoAmI( void );

	private:

		std::string	_Name;
};

#endif /* DIAMONDTRAP_HPP */
