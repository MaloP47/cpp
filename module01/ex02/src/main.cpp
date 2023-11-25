/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:01:13 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 19:45:00 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void ) {

	std::string	const	str = "HI THIS IS BRAIN";
	std::string const	*stringPTR = &str;
	std::string const	&stringREF = str;

	std::cout << "Adress of the string varible : " << &str << std::endl;
	std::cout << "Adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Adress held by stringREF : " << &stringREF << std::endl;

	std::cout << "Value of str : " << str << std::endl;
	std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;
	
	return 0 ;
}
