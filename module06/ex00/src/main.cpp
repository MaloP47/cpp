/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:36:51 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/20 15:11:40 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main( int ac, char** av ) {

	// ScalarConverter	Test;
	if ( ac ==  2 )
		ScalarConverter::convert( av[1] ) ;
	else
		std::cout << EXAMPLE ;
	
	return 0 ;
}
