/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:56:36 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/29 15:29:24 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int	main( void ) {

	{
		std::vector<int>	vec;

		vec.push_back(0);
    	vec.push_back(1);
    	vec.push_back(2);
    	vec.push_back(2);
    	vec.push_back(3);

		try {
			std::vector<int>::const_iterator it_begin = vec.begin();
			std::vector<int>::const_iterator it = ::easyfind(vec, 3);
			if (it != vec.end()) {
    			std::cout << "Nb found at index: " << std::distance(it_begin, it) << std::endl;
    			std::cout << "At index value is: " << * ::easyfind(vec, 3) << std::endl;
			}
		}
		catch( std::exception & e ) {
			std::cout << e.what() << std::endl ;		
		}
		try {
			std::vector<int>::const_iterator it_begin = vec.begin();
			std::vector<int>::const_iterator it = ::easyfind(vec, 8);
			if (it != vec.end()) {
    			std::cout << "Nb found at index: " << std::distance(it_begin, it) << std::endl;
    			std::cout << "At index value is: " << * ::easyfind(vec, 8) << std::endl;
			}
		}
		catch( std::exception & e ) {
			std::cout << e.what() << std::endl ;		
		}

	}
	std::cout << "----------------------------------\n" ;
	{
		std::list<int>	lst;

		lst.push_back(0);
    	lst.push_back(1);
    	lst.push_back(2);
    	lst.push_back(3);
    	lst.push_back(4);
		lst.push_back(0);
    	lst.push_back(1);
    	lst.push_back(2);
    	lst.push_back(3);
    	lst.push_back(4);
		lst.push_back(0);
    	lst.push_back(1);
    	lst.push_back(2);
    	lst.push_back(8);
    	lst.push_back(4);

		try {
			std::list<int>::const_iterator it_begin = lst.begin();
			std::list<int>::const_iterator it = ::easyfind(lst, 8);
			if (it != lst.end()) {
    			std::cout << "Nb found at index: " << std::distance(it_begin, it) << std::endl;
    			std::cout << "At index value is: " << * ::easyfind(lst, 8) << std::endl;
			}
		}
		catch( std::exception & e ) {
			std::cout << e.what() << std::endl ;		
		}
	}
	std::cout << "----------------------------------\n" ;
	{
		std::deque<int>	dq;

		dq.push_back(8);
		dq.push_back(8);
		dq.push_back(8);
		dq.push_back(8);
		dq.push_back(8);


		try {
			std::deque<int>::const_iterator it_begin = dq.begin();
			std::deque<int>::const_iterator it = ::easyfind(dq, 8);
			if (it != dq.end()) {
    			std::cout << "Nb found at index: " << std::distance(it_begin, it) << std::endl;
    			std::cout << "At index value is: " << * ::easyfind( dq, 8) << std::endl;
			}
		}
		catch( std::exception & e ) {
			std::cout << e.what() << std::endl ;		
		}
	}
