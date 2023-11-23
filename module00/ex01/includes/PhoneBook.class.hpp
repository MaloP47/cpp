/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:44:48 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/23 13:15:50 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <string>
# include <iostream>
# include <sstream>
# include <iomanip>

# include "Contact.class.hpp"

# define ERR_BLANK "\033[5;91mField can't be blank\n\033[0;39m"
# define INVALID_INPUT "ADD SEARCH & EXIT are the only available commands"
# define EXIT_INPUT "Everything is lost... Bye"

# define ADD_FN "Add contact's first name : \n"
# define ADD_LN "Add contact's last name : \n"
# define ADD_NN "Add contact's nick name : \n"
# define ADD_PN "Add contact's phone number : \n"
# define ADD_DS "Add contact's darkest secret : \n"
# define CTRL_D "Program quit because of user : ctrl d!"


class	PhoneBook {
	
	public:

		PhoneBook( void );
		~PhoneBook( void );

		bool			functionalities( std::string );

	private:

		int				_index;
		Contact			_contact[8];

		bool			_addContact( void );
		std::string		_trimLength( const std::string& detail);
		void			_indexMenu( void );
		bool			_isIndexValid( const std::string& detail );
		bool			_displaySnipContact( int index );
		bool			_searchContact( void );
};

#endif
