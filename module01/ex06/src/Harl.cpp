/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:50:11 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/29 11:55:19 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* *** constructor *** */

Harl::Harl( void ) {
}

/* *** destructor *** */

Harl::~Harl( void ) {
}

/* *** public functions *** */

void    Harl::complain( std::string level ) {
	
	std::string		validComplaint[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void			(Harl::*ptr[4])() = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error };

	for (int i = 0; i < 4; ++i) {
		if (level == validComplaint[i]) {
			(this->*ptr[i])();
			return ;
		}
	}
	std::cout << UNKNOWN << std::endl;
}

void    Harl::complainLevels( std::string level ) {
	
	std::string		validComplaint[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void			(Harl::*ptr[4])() = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error };
	int				index = -1;

	for (int i = 0; i < 4; ++i) {
		if (level == validComplaint[i]) {
			index = i;
			break ;
		}
	}
	switch ( index ) {
		case 0:
			(this->*ptr[0])();
		case 1:
			(this->*ptr[1])();
		case 2:
			(this->*ptr[2])();
		case 3:
			(this->*ptr[3])();
			break ;
		default: std::cout << UNKNOWN << std::endl;
	}
}

/* *** private function *** */

void    Harl::_debug( void ) {
	std::cout << DEBUG_MESS << std::endl;
}

void    Harl::_info( void ) {
	std::cout << INFO_MESS << std::endl;
}

void    Harl::_warning( void ) {
	std::cout << WARNING_MESS << std::endl;
}

void    Harl::_error( void ) {
	std::cout << ERROR_MESS << std::endl;
}
