/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:25:38 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/21 12:49:08 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {

	std::string	target = "random" ;
	ScavTrap	a( "Alice" ) ;
	ClapTrap	b("Bob") ;
	ScavTrap	c = a;

	a.guardGate();
	a.attack( target );
	a.beRepaired( 100 );
	a.takeDamage( 149 );
	a.takeDamage( 55 );
	c.guardGate();
	b.attack( "Alice" );
	c.takeDamage( b.getAttackDamage() );
	return 0;
}
