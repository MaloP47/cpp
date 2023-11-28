/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:51:28 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/28 18:19:00 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int	main( int ac, char **av ) {

	Harl			HarlComplain;

	if (ac == 2)
		HarlComplain.complainLevels( av[1] );
	else
		std::cout << "You can only use 1 level" << std::endl;
	return 0;
}