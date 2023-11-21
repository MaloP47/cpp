/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:45:15 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/21 17:34:19 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>
# include <cctype>

# define ERR_SETNAME_CHAR "Please use only alphabetical characters, - or space"
# define ERR_NB "Please use only digits or +"
# define FIRST_N "First name : "
# define LAST_N "Last name : "
# define NICK_N "Nick name : "
# define PHONE_N "Phone number : "
# define SECRET "Secret : "

# define DISPLAY "Here are the contact's details you selected : "

class   Contact {
	
	public:
	
		Contact(void);
		~Contact(void);
		
		bool			displayFullContact( int *index );
		
		std::string 	getFirstname() const;
		std::string 	getLastname() const;
		std::string 	getNickname() const;
		std::string 	getPhonenumber() const;
		std::string 	getDarkestsecret() const;
		
		bool			setFirstname( std::string& firstname );
		bool			setLastname( std::string& lastname );
		bool			setNickname( const std::string& nickname );
		bool			setPhonenumber( const std::string& phonenumber );
		bool			setDarkestsecret( const std::string& darkestsecret );
	
	private:

		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_phonenumber;
		std::string		_darkestsecret;

		bool			_is_valid_for_name( const char c);
		bool			_parse_name( const std::string& user_input );
		bool			_parse_number( const std::string& user_input );
		bool			_contactEmpty( void );

};

#endif
