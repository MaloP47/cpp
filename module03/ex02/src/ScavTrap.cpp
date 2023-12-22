/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:48:09 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/21 13:30:35 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* *** constructors *** */

ScavTrap::ScavTrap( void ) : ClapTrap() {
    setHitPoints( 100 );
    setEnergyPoints( 50 );
    setAttackDamage( 20 );
    std::cout << DEF_SCAV << _Name << std::endl ;
}

ScavTrap::ScavTrap( const std::string & name ) : ClapTrap( name ) {
    setHitPoints( 100 );
    setEnergyPoints( 50 );
    setAttackDamage( 20 );
	std::cout << CONST_SCAV << _Name << std::endl ;
}

/* *** copy constructor *** */

ScavTrap::ScavTrap( ScavTrap const & cpy ) : ClapTrap() {
	std::cout << COPY_SCAV << _Name << std::endl ;
    *this = cpy ;
}

/* *** destructor *** */

ScavTrap::~ScavTrap( void ) {
	std::cout << DEST_SCAV << _Name << std::endl ;
}

/* *** operator = *** */

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
	if (this != &rhs) {
		_Name = rhs.getName() ;
		_HitPoints = rhs.getHitPoints() ;
		_EnergyPoints = rhs.getEnergyPoints() ;
		_AttackDamage = rhs.getAttackDamage() ;
	}
	return *this ;
}

/* *** public functions *** */

void	ScavTrap::attack( std::string & target) {
	if (getHitPoints() == 0) {
		std::cout << SCAV << getName() << CT_ATT << DEAD ;
		return ;
	}
	if (getEnergyPoints() == 0) {
		std::cout << SCAV << getName() << CT_ATT << NRG ;
		return ;
	}
	if (_EnergyPoints > 0)
		_EnergyPoints -= 1;
	std::cout << SCAV << getName() << ATT << target << DAMAGE << getAttackDamage() << std::endl;
}

void	ScavTrap::guardGate( void ) {
	if (getHitPoints() == 0) {
		std::cout << SCAV << getName() << CT_G << DEAD ;
		return ;
	}
    std::cout << SCAV << getName() << GUARD ;
}
