/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:06:39 by root              #+#    #+#             */
/*   Updated: 2023/12/30 18:31:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main( void ) {

	// const AAnimal*	a = new AAnimal();

	int			size = 6;
	AAnimal *	array_of_animals[size];

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

	return 0 ;
}
