/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:07:44 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:07:46 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* *** constructors *** */

DiamondTrap::DiamondTrap( void ) : FragTrap(), ScavTrap() {
	_Name = "Default Unamed" ;
	setHitPoints( FragTrap::getHitPoints() ) ;
	setEnergyPoints( ScavTrap::getEnergyPoints() ) ;
	setAttackDamage( FragTrap::getAttackDamage() ) ;
	std::cout << DEF_DIAM << _Name << std::endl ;
}

DiamondTrap::DiamondTrap( const std::string & name ) : ClapTrap( name + "_clap_name" ), FragTrap( name ), ScavTrap( name ),  _Name( name ) {
	setHitPoints( FragTrap::getHitPoints() ) ;
	setEnergyPoints( ScavTrap::getEnergyPoints() ) ;
	setAttackDamage( FragTrap::getAttackDamage() ) ;
	std::cout << CONST_DIAM << _Name << std::endl ;
}

/* *** copy constructor *** */

DiamondTrap::DiamondTrap( DiamondTrap const & cpy ) : ClapTrap(), FragTrap(), ScavTrap() {
	std::cout << COPY_DIAM << _Name << std::endl ;
	*this = cpy ;
}

/* *** destructor *** */

DiamondTrap::~DiamondTrap( void ) {
	std::cout << DEST_DIAM << _Name << std::endl ;
}

/* *** operator = *** */

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs ) {
	if (this != &rhs ) {
		_Name = rhs.getName() ;
		_HitPoints = rhs.getHitPoints() ;
		_EnergyPoints = rhs.getEnergyPoints() ;
		_AttackDamage = rhs.getAttackDamage() ;
	}
	return *this ;
}

/* *** public functions *** */

void	DiamondTrap::whoAmI( void ) {
	std::cout << "---------------\n" ;
	std::cout << DIAM << _Name << std::endl ;
	std::cout << "---------------\n" ;
	std::cout << ClapTrap::_Name << std::endl ;
	std::cout << "---------------\n" ;
}
