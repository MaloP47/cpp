/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:25:38 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/21 13:45:51 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {

	ClapTrap	a("Alice");
	ScavTrap	b("Bob");
	FragTrap	c("Charly");

	c.highFivesGuys();
	c.takeDamage( 1000 );
	c.highFivesGuys();
	return 0;
}
