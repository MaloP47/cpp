/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:40:14 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 18:57:32 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name ) {
	Zombie *undead = new Zombie( name );
	if (!undead) {
		std::cerr << "undead mem alloc err" << std::endl;
		return NULL ;
	}
	return undead ;
}
