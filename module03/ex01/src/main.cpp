/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:25:38 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/20 14:51:23 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	
	ClapTrap	a("Alice");
	ClapTrap	b("Bob");
	ClapTrap	c;
	ClapTrap	d(c);
	ClapTrap	e;

	a.setAttackDamage(5);
	e = a;
	std::cout << e.getAttackDamage() << std::endl;
	a.attack("Bob");
	b.takeDamage(a.getAttackDamage());
	a.setAttackDamage(50);
	a.attack("Bob");
	b.takeDamage(a.getAttackDamage());

	b.beRepaired( 50 );
	a.setEnergyPoints( 1 );
	a.beRepaired( 200 );
	a.attack("Bob");

	return 0;
}
