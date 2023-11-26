/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedpp.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:34:15 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/26 18:01:47 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sedpp.hpp"

/* *** constructor *** */

Sedpp::Sedpp( const std::ifstream& ifs, const std::ofstream& ofs ) : _ifs( ifs ), _ofs( ofs ) {
}

/* *** destructor *** */

Sedpp::~Sedpp( void ) {
	if (_ifs.is_open()) {
		_ifs.close();
	if (_ofs.is_open()) {
		_ofs.close();
	}
	}
}

/* *** public functions *** */

/* GETTERS */

/* SETTERS */

/* *** private functions *** */
