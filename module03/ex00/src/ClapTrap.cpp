/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:26:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/19 11:09:50 by mpeulet          ###   ########.fr       */
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
/* *** operator = *** */
/* *** destructor *** */

ClapTrap::~ClapTrap( void ) {
	std::cout << DESTRUCTOR << _Name << std::endl ;
}

/* *** public functions *** */
/* GETTER */
/* SETTER */
/* *** private function *** */
/* *** other *** */