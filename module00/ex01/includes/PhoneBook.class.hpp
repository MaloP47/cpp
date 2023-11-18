/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:44:48 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/18 21:00:58 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <string>
# include <iostream>

# include "Contact.class.hpp"

# define INVALID_INPUT "ADD SEARCH & EXIT are the only available commands"
# define EXIT_INPUT "Everything is lost... Bye"

class	PhoneBook {
	
	public:

		PhoneBook( void );
		~PhoneBook( void );

		bool	functionalities( std::string );

	private:

		int			_index;
		// Contact		_contact[8];
};

#endif
