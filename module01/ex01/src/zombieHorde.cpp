/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:25:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 16:01:21 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define NN "Please use a positive number\n"

Zombie*	zombieHorde( int N, std::string name) {

	if (N <= 0) {
		std::cout << NN;
		return NULL ;
	}

	Zombie	*horde = new Zombie[N];
	
	return horde ;
}