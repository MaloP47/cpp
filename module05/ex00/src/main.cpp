/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:07:41 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/18 18:14:33 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat	Alice("Alice", 42);
	Bureaucrat	Bob("Bob", 21);
	std::cout << Bob ;
	Alice = Bob;
	std::cout << Alice ;
	Bureaucrat	Cpy(Alice);
	std::cout << Cpy ;

	return 0 ;
}