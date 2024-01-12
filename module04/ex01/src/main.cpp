/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:06:39 by root              #+#    #+#             */
/*   Updated: 2024/01/12 11:22:43 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main( void ) {
	{
		Brain	a;
		std::cout << a.getIdeas( 0 ) << std::endl ;
		std::cout << a.getIdeas( -25 ) << std::endl ;
		std::cout << a.getIdeas( 105 ) << std::endl ;
		std::cout << a.getIdeas( 5 ) << std::endl ;
		a.setIdeas( 5, "Idea 5" ) ;
		std::cout << a.getIdeas( 5 ) << std::endl ;
	}
	std::cout << "--------------------------------------\n" ;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	std::cout << "--------------------------------------\n" ;
	{
		int			size = 6;
		Animal *	array_of_animals[size];

		for ( int i = 0; i < size / 2; ++i ) {
			array_of_animals[i] = new Cat() ;
		}

		for ( int i = size / 2; i < size; ++i ) {
			array_of_animals[i] = new Dog() ;
		}

		for ( int i = 0; i < size; ++i ) {
			array_of_animals[i]->makeSound() ;
		}

		for ( int i = 0; i < size; ++i ) {
			delete array_of_animals[i];
		}
	}
	std::cout << "--------------------------------------\n" ;
	{
		Cat tmp;
		tmp.makeSound() ;
		tmp.getBrain()->setIdeas(0, "Food");
		{
			Cat tmp2 = tmp;
			std::cout << tmp2.getBrain()->getIdeas(0) << std::endl ;
			std::cout << tmp.getBrain()->getIdeas(0) << std::endl ;
		}
	}
	std::cout << "--------------------------------------\n" ;
	{
		Dog tmp;
		{
			Dog tmp2 = tmp;
		}
	}
	std::cout << "--------------------------------------\n" ;
	{
		Dog tmp;
		tmp.makeSound() ;
		tmp.getBrain()->setIdeas(0, "Food");
		{
			Dog tmp2(tmp);
			std::cout << tmp2.getBrain()->getIdeas(0) << std::endl ;
			std::cout << tmp.getBrain()->getIdeas(0) << std::endl ;
			tmp2.getBrain()->setIdeas(0, "Play fetch");
			std::cout << tmp2.getBrain()->getIdeas(0) << std::endl ;
			std::cout << tmp.getBrain()->getIdeas(0) << std::endl ;
		}
	}
	return 0 ;
}
