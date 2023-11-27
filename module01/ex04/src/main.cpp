/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:10:18 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/27 11:14:35 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sedpp.hpp"
#include <iostream>

# define EXAMPLE "\033[0;91mParameters must be 3 : <filename> <string to be replaced> <string to replace by>\033[0;39m"
# define INVALID_ARG std::cout << EXAMPLE << std::endl
# define RUNTIME_ERR std::cerr << "Error: " << err.what() << std::endl

int	main(int ac, char **av) {

	if (ac != 4) return INVALID_ARG, 1;
	
	std::string	infile = av[1];
	std::string outfile = infile + ".replace";

	try {
		Sedpp	sed( infile, outfile);
	} catch (const std::runtime_error& err) {
		return RUNTIME_ERR, 1 ;
	}
	
	return 0;
}
