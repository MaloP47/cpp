/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:44:48 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/20 21:51:16 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <string>
# include <iostream>
# include <sstream>

# include "Contact.class.hpp"

# define DEF "\033[0;39m"
# define BLINK_DEF "\033[5;39m"

# define INVALID_INPUT "ADD SEARCH & EXIT are the only available commands"
# define EXIT_INPUT "Everything is lost... Bye"

# define ADD_FN "Add contact n° %d's first name :"

class	PhoneBook {
	
	public:

		PhoneBook( void );
		~PhoneBook( void );

		bool	functionalities( std::string );

	private:

		int			_index;
		Contact		_contact[8];

		void		_addContact( void );
};

#endif
