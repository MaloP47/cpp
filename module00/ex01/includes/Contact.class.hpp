/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:45:15 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/18 12:33:51 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <iostream>

class   Contact {
	
	public:
	
		Contact(void);
		~Contact(void);

		static int		getNbInstContact( void );
		
		std::string 	getFirstname() const;
		std::string 	getLastname() const;
		std::string 	getNickname() const;
		std::string 	getPhonenumber() const;
		std::string 	getDarkestsecret() const;
	
	private:

		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_phonenumber;
		std::string		_darkestsecret;

		static int		_nbInstContact;
};

#endif