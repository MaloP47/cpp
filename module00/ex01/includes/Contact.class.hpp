/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:45:15 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/18 20:16:03 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>
# include <cctype>

# define ERR_BLANK "Field can't be blank"
# define ERR_SETNAME_CHAR "Please use only alphabetical characters, - or space"
# define ERR_NB "Please use only digits or +"
# define FIRST_N "First name : "
# define LAST_N "Last name : "
# define NICK_N "Nick name : "
# define PHONE_N "Phone number : "
# define SECRET "Secret : "

class   Contact {
	
	public:
	
		Contact(void);
		~Contact(void);
		
		std::string 	getFirstname() const;
		std::string 	getLastname() const;
		std::string 	getNickname() const;
		std::string 	getPhonenumber() const;
		std::string 	getDarkestsecret() const;

		void			_setContact_blank( void );
		
		bool			_setFirstname( std::string& firstname );
		bool			_setLasttname( std::string& lastname );
		bool			_setNickname( const std::string& nickname );
		bool			_setPhonenumber( const std::string& phonenumber );
		bool			_setDarkestsecret( const std::string& darkestsecret );

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