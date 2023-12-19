/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:25:08 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/19 11:10:55 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define DEFAULT "Default constructor called "
# define CONSTRUCTOR "Constructor called "
# define DESTRUCTOR "Destructor called "

class	ClapTrap {

	public:

		ClapTrap( void );								//Coplien default constructor
		ClapTrap( const std::string & name );			
		ClapTrap( ClapTrap const & cpy);				//Coplien copy constructor
		~ClapTrap( void );								//Coplien destructor
		ClapTrap &	operator=( ClapTrap const & rhs );	//Coplien copy assignement operator

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private:

		std::string		_Name;
		unsigned int	_HitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;

};

std::ostream &	operator<<( std::ostream & o, ClapTrap const & rhs );

#endif /* CLAPTRAP_HPP */