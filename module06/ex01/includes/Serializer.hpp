/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:40:40 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/21 14:26:25 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stdint.h>
# include <iostream>

typedef struct Data {

	char		c;
	std::string	s;
	int			n;

} Data ;

class	Serializer {

	public:

		~Serializer( void ) ;

		static uintptr_t	serialize( Data * ptr ) ;
		static Data *		deserialize( uintptr_t raw ) ;

	private:

		Serializer( void ) ;
		Serializer( Serializer const & cpy ) ;
		Serializer & operator=( Serializer const & rhs ) ;
} ;

/* *** SERIALIZER.HPP *** */
