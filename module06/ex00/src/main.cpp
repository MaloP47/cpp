/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:36:51 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/21 16:10:04 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main( int ac, char** av ) {

	// ScalarConverter	Test;
	if ( ac == 2 && static_cast<std::string>( av[1] ).size() )
		ScalarConverter::convert( av[1] ) ;
	else
		std::cout << EXAMPLE ;

	return 0 ;
}
