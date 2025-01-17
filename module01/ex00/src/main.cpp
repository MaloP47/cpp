/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:38:00 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 15:10:58 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	

	Zombie *heapZombie2 = newZombie("Jack");
	Zombie *heapZombie1 = newZombie("Bob");
	heapZombie1->announce();
	delete heapZombie1 ;

	std::cout << "-------------------" << std::endl;

	heapZombie2->announce();

	std::cout << "-------------------" << std::endl;

	randomChump("Alice");
	delete heapZombie2 ;
	
	return 0 ;
}
