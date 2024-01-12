/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:07:34 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/12 11:27:40 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int	main( void ) {
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << "-----------------------------------------\n" ;
	{
		ICharacter*	bob = new Character("bob") ;
		ICharacter*	unknown = new Character() ;
		AMateria*	mat1 = new Cure() ;
		AMateria*	mat2 = new Ice() ;

		bob->equip(mat1) ;
		bob->equip(mat2) ;
		bob->unequip(1) ;
		bob->unequip(2) ;
		bob->unequip(0) ;
		bob->unequip(0) ;

		unknown->equip(mat2);
		unknown->equip(mat1);
		unknown->use(0, *bob);

		delete bob ;
		delete unknown;
	}
	std::cout << "-----------------------------------------\n" ;
	{
		IMateriaSource*	MateriaSrc = new MateriaSource() ;
		AMateria*		extra = new Ice() ;
		
		MateriaSrc->learnMateria( new Ice() );
		MateriaSrc->learnMateria( new Ice() );
		MateriaSrc->learnMateria( new Ice() );
		MateriaSrc->learnMateria( new Ice() );
		MateriaSrc->learnMateria( extra );

		AMateria*	test = NULL;

		test = MateriaSrc->createMateria("cure") ;

		delete MateriaSrc ;
		delete test ;
		delete extra ;
	}
	std::cout << "-----------------------------------------\n" ;
	{
		Character	Bob("bob");
		Character	Charlie(Bob);
	
		AMateria*	mat1 = new Cure() ;
		AMateria*	mat2 = new Ice() ;

		Charlie.equip(mat2);
		Charlie.equip(mat1) ;
	
		Character	Equal = Charlie;
		Equal.use(0, Bob) ;

		AMateria*	mat3 = new Ice() ;
		Equal.equip(mat3) ;

		Character	David(Equal) ;
		std::cout << "-----------------------------------------\n" ;
		std::cout << David.getInventorySize() << std::endl ;
		David.use(0, Charlie) ;
		std::cout << "-----------------------------------------\n" ;
	}
	return 0;
}
