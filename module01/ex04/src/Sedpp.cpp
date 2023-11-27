/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedpp.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:34:15 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/27 11:10:51 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sedpp.hpp"

/* *** constructor *** */

Sedpp::Sedpp( const std::string& inputFile, const std::string& outpoutFile ) : _ifs( inputFile.c_str() ) {
	if (!_ifs)
		throw std::runtime_error(IN_ERR + inputFile);
	_ofs.open(outpoutFile.c_str());
	if (!_ofs)
		throw std::runtime_error(OUT_ERR + outpoutFile);
}

/* *** destructor *** */

Sedpp::~Sedpp( void ) {
}

/* *** public functions *** */

/* GETTERS */

/* SETTERS */

/* *** private functions *** */
