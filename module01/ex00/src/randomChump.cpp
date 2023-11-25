/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:47:03 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 15:04:30 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* *** stack version *** */

void	randomChump( std::string name ) {
	Zombie	Chump = Zombie( name );
	Chump.announce();
	return ;
}

/* *** heap version *** */

/*void	randomChump( std::string name ) {
	Zombie	*Chump = new Zombie( name );
	Chump->announce();
	return delete Chump ;
}*/
