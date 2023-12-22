/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:09:09 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/21 13:45:05 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* *** constructors *** */

FragTrap::FragTrap( void ) : ClapTrap() {
	setHitPoints( 100 );
	setEnergyPoints( 100 );
	setAttackDamage( 30 );
	std::cout << DEF_FRAG << _Name << std::endl ;
}

FragTrap::FragTrap( const std::string & name ) : ClapTrap( name ) {
	setHitPoints( 100 );
	setEnergyPoints( 100 );
	setAttackDamage( 30 );
	std::cout << CONST_FRAG << _Name << std::endl ;
}

/* *** copy constructor *** */

FragTrap::FragTrap( FragTrap const & cpy ) : ClapTrap() {
	std::cout << COPY_FRAG << _Name << std::endl ;
    *this = cpy ;
}

/* *** destructor *** */

FragTrap::~FragTrap( void ) {
	std::cout << DEST_FRAG << _Name << std::endl ;
}

/* *** operator = *** */

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
	if (this != &rhs) {
		_Name = rhs.getName() ;
		_HitPoints = rhs.getHitPoints() ;
		_EnergyPoints = rhs.getEnergyPoints() ;
		_AttackDamage = rhs.getAttackDamage() ;
	}
	return *this ;
}

/* *** public functions *** */

void	FragTrap::highFivesGuys( void ) {
	if (getHitPoints() == 0) {
		std::cout << FRAG << getName() << CT_H << DEAD ;
		return ;
	}
    std::cout << FRAG << getName() << H5 ; 
}
