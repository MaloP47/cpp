/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:30:27 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/21 14:01:13 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/* *** public functions *** */

Serializer::~Serializer( void ) {}

uintptr_t	Serializer::serialize( Data * ptr ) {
	return reinterpret_cast<uintptr_t>( ptr ) ;
}

Data *	Serializer::deserialize( uintptr_t raw ) {
	return reinterpret_cast<Data *>( raw ) ;
}

/* *** private functions *** */

Serializer::Serializer( void ) {}

Serializer::Serializer( Serializer const & cpy ) {
	static_cast<void>( cpy );
}

Serializer & Serializer::operator=( Serializer const & rhs ) {
	static_cast<void>( rhs ) ;
	return *this ;
}
