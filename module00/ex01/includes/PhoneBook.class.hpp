/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:44:48 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/15 13:54:24 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string>
#include <iostream>

#include "Contact.class.hpp"

class	PhoneBook {
	
	public:

		PhoneBook( void );
		~PhoneBook( void );

		bool	functions( std::string );

	private:

		// Contact	_contact[8];
};

#endif
