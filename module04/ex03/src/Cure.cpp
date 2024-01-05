/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:46:39 by mpeulet           #+#    #+#             */
/*   Updated: 2024/01/05 14:06:14 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* *** constructors *** */

Cure::Cure( void ) {
	
}

/* *** copy constructor *** */
Cure::Cure( Cure const & cpy ) ;
/* *** destructor *** */
Cure::~Cure( void ) ;
/* *** operator = *** */
Cure & Cure::operator=( Cure const & rhs ) ;
/* *** public functions *** */

AMateria*	Cure::clone( void ) const ;
void	Cure::use( ICharacter& target ) ;

/* *** private functions *** */
/* *** other *** */
