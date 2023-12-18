/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:26:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/18 16:22:45 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* *** constructors *** */

ClapTrap::ClapTrap( const std::string & name ) : _name( name ),
													_HitPoint( 10 ),
													_EnergyPoints( 10 ),
													_AttackDamage( 0 ) {
														
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