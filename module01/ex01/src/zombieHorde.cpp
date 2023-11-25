/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:25:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 18:49:12 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

#define NN "Please use a positive number\n"

Zombie*	zombieHorde( int N, std::string name ) {

	if (N <= 0) {
		std::cout << NN;
		return NULL ;
	}
	Zombie	*horde = new Zombie[N];
	if (!horde) {
		std::cerr << "horde mem alloc err" << std::endl;
		return NULL ;
	}
	for (int i = 0; i < N; ++i) {
		std::stringstream nz;
		nz << name << " " << i;
		horde[i].setName( nz.str() );
	}
	return horde ;
}
