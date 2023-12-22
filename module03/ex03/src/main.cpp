/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:25:38 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/22 12:03:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) {

	{
		std::string	target = "Random target" ;
		DiamondTrap	a("Alice") ;

		a.whoAmI();
		a.attack( target ) ;
		a.takeDamage( 150 ) ;
		a.attack( target ) ;
	}
	std::cout << "\n*************************************\n" ;
	{
		std::string	target = "Random target" ;
		DiamondTrap	b;
		
		b.whoAmI() ;
		b.attack( target ) ;
		b.takeDamage( 99 ) ;
		b.takeDamage( 1 ) ;
		b.attack( target ) ;
	}
	std::cout << "\n*************************************\n" ;
	{
		std::string	target = "Random target" ;
		DiamondTrap	c("Charly") ;

		c.guardGate() ;
		c.highFivesGuys() ;
	}

	return 0 ;
}
