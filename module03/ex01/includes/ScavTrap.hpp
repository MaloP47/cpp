/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:48:58 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/20 15:40:42 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

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
