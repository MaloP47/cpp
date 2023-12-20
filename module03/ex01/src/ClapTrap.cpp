/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:26:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/20 14:18:40 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* *** constructors *** */

ClapTrap::ClapTrap( void ) : _Name( "Unamed" ), _HitPoints( 10 ), _EnergyPoints( 10 ), _AttackDamage( 0 ) {
	std::cout << DEFAULT << _Name << std::endl ;
}

ClapTrap::ClapTrap( const std::string & name ) : _Name( name ), _HitPoints( 10 ), _EnergyPoints( 10 ), _AttackDamage( 0 ) {
	std::cout << CONSTRUCTOR << _Name << std::endl ;													
}

/* *** copy constructor *** */

ClapTrap::ClapTrap( ClapTrap const &cpy ) {
	std::cout << COPY << _Name << std::endl ;
	*this = cpy ;
}

/* *** destructor *** */

ClapTrap::~ClapTrap( void ) {
	std::cout << DESTRUCTOR << _Name << std::endl ;
}

/* *** operator = *** */

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
	if (this != &rhs) {
		_Name = rhs.getName() ;
		_HitPoints = rhs.getHitPoints() ;
		_EnergyPoints = rhs.getEnergyPoints() ;
		_AttackDamage = rhs.getAttackDamage() ;
	}
	return *this ;
} 

/* *** public functions *** */

/* GETTERS */

const std::string &	ClapTrap::getName( void ) const {
	return _Name ;
}

const unsigned int &	ClapTrap::getHitPoints( void ) const {
	return _HitPoints ;
}

const unsigned int &	ClapTrap::getEnergyPoints( void ) const {
	return _EnergyPoints ;
}

const unsigned int &	ClapTrap::getAttackDamage( void ) const {
	return _AttackDamage ;
}

/* SETTER */

bool	ClapTrap::setHitPoints( int HP ) {
	if (HP < 0) return false ;
	_HitPoints = HP;
	return true ;
}

bool	ClapTrap::setEnergyPoints( int EP ) {
	if (EP < 0) return false ;
	_EnergyPoints = EP;
	return true ;
}

bool	ClapTrap::setAttackDamage( int AD ) {
	if (AD < 0) return false ;
	_AttackDamage = AD;
	std::cout << CLAP << getName() << " is boosted!\n" ;
	return true ;
}

void	ClapTrap::attack( const std::string& target ) {
	if (getHitPoints() == 0) {
		std::cout << CLAP << getName() << CT_ATT << DEAD ;
		return ;
	}
	if (getEnergyPoints() == 0) {
		std::cout << CLAP << getName() << CT_ATT << NRG ;
		return ;
	}
	if (_EnergyPoints > 0)
		_EnergyPoints -= 1;
	std::cout << CLAP << getName() << ATT << target << DAMAGE << getAttackDamage() << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (getHitPoints() == 0) {
		std::cout << CLAP << getName() << CT_DAM << DEAD ;
		return ;
	}
	if (amount >= getHitPoints()) {
		setHitPoints( 0 );
		std::cout << CRIT << CLAP << getName() << " died...\n" ;
		return ;
	}
	setHitPoints( getHitPoints() - amount );
	std::cout << CLAP << getName() << HIT << amount << " damage. " << getHitPoints() << HPL;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (getHitPoints() == 0) {
		std::cout << CLAP << getName() << CT_REP << DEAD ;
		return ;
	}
	if (getEnergyPoints() == 0) {
		std::cout << CLAP << getName() << CT_REP << NRG ;
		return ;
	}
	if (_EnergyPoints > 0)
		_EnergyPoints -= 1;
	setHitPoints( getHitPoints() + amount ) ;
	std::cout << CLAP << getName() << MNRG << amount << " was added to her/his HP. " << getHitPoints() << " hp left.\n" ;
}

/* *** private function *** */
/* *** other *** */
