/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:24:19 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 18:45:58 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int	main(int ac, char **av) {
	if (ac == 2) {
	int	N = std::atoi(av[1]);
	Zombie	*horde = zombieHorde( N, "Zombie n°" );
	for(int i = 0; i < N; ++i)
		horde[i].announce();
	delete [] horde;
	}
	else
		std::cout << "Please add 1 positive int as a parameter" << std::endl;
	return 0;
}