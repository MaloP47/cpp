/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:16:23 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/03 13:16:25 by mpeulet          ###   ########.fr       */
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
