/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:45:15 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/18 16:49:39 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>
# include <cctype>

class   Contact {
	
	public:
	
		Contact(void);
		~Contact(void);
		
		std::string 	getFirstname() const;
		std::string 	getLastname() const;
		std::string 	getNickname() const;
		std::string 	getPhonenumber() const;
		std::string 	getDarkestsecret() const;

		static int		getNbInstContact( void );
	
	private:

		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_phonenumber;
		std::string		_darkestsecret;

		bool			_is_valid_for_name( const char c);
		bool			_parse_name( const std::string& user_input );
		bool			_parse_number( const std::string& user_input );

		static int		_nbInstContact;
};

#endif