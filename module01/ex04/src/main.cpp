/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:10:18 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/27 19:24:46 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sedpp.hpp"

# define EXAMPLE "\033[0;91mParameters must be 3 : <filename> <string to be replaced> <string to replace by>\033[0;39m"
# define EMPTY "Arguments strings must not be empty"

# define INVALID_EMPTY std::cout << EMPTY << std::endl
# define INVALID_ARG std::cout << EXAMPLE << std::endl
# define RUNTIME_ERR std::cerr << "Error: " << err.what() << std::endl

int	main(int ac, char **av) {

	if (ac != 4) return INVALID_ARG, 1 ;
	if (std::string(av[2]).empty() || std::string(av[3]).empty()) return INVALID_EMPTY, 1 ;
	
	std::string	infile = av[1];
	std::string outfile = infile + ".replace";

	try {
		Sedpp	sed( infile, outfile);
		sed.replace( std::string( av[2] ), std::string( av[3] ));
	} catch (const std::runtime_error& err) {
		return RUNTIME_ERR, 1 ;
	}
	return 0;
}
