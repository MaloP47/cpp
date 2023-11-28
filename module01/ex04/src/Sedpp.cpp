/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedpp.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:34:15 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/28 16:41:28 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sedpp.hpp"

/* *** constructor *** */

Sedpp::Sedpp( const std::string& inputFile ) : _ifs( inputFile.c_str() ) {
	if (!_ifs)
		throw std::runtime_error(IN_ERR + inputFile);
	/*_ofs.open(outpoutFile.c_str());
	if (!_ofs)
		throw std::runtime_error(OUT_ERR + outpoutFile);*/
}

/* *** destructor *** */

Sedpp::~Sedpp( void ) {
}

/* *** public functions *** */

void	Sedpp::replace( const std::string& toReplace, const std::string& replaceBy, const std::string& outpoutFile ) {

	std::string	buffer;
	bool		isEmpty = true;

	while (std::getline( _ifs, buffer )) {
		if (buffer.empty()) {
			isEmpty = false;
			break ;
		}
	} 
	if (isEmpty) throw std::runtime_error(FILE_EMPTY);
	_ofs.open(outpoutFile.c_str());
	if (!_ofs)
		throw std::runtime_error(OUT_ERR + outpoutFile);
	_ifs.clear();
    _ifs.seekg(0, std::ios::beg);
	if (std::getline(_ifs, buffer)) {
		do {
			_ofs << _replaceSubstring( buffer, toReplace, replaceBy );
			if (!_ifs.eof()) {
				_ofs << "\n";
			}
		} while (std::getline(_ifs, buffer));
	}
	return ;
}

/* *** private function *** */

std::string 	Sedpp::_replaceSubstring( const std::string& buffer, const std::string& toReplace, const std::string& replaceBy ) {
    std::string 	replacement;
    size_t			pos = 0;
    size_t			lastPos = 0;

    while ((pos = buffer.find(toReplace, lastPos)) != std::string::npos) {
        replacement.append(buffer.begin() + lastPos, buffer.begin() + pos);
        replacement.append(replaceBy);
        lastPos = pos + toReplace.length();
    }
    replacement.append(buffer.begin() + lastPos, buffer.end());
    return replacement;
}
