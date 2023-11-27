/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedpp.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:34:15 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/27 22:17:42 by mpeulet          ###   ########.fr       */
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

void	Sedpp::replace( const std::string& toReplace, const std::string& replaceBy ) {

	std::string	buffer;

	/*if ((!_ifs.peek()) != std::ifstream::traits_type::eof()) {
        std::cerr << "Input file is empty" << std::endl;
        return; 
    }*/

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

/*std::string		Sedpp::_replaceSubstring( const std::string& buffer, const std::string& toReplace, const std::string& replaceBy ) {

	std::string		replacement;
	size_t			pos = buffer.find(toReplace);

	while (pos != std::string::npos) {
		replacement = replacement.substr(0, pos) + replaceBy + replacement.substr(pos + toReplace.length());
		pos = replacement.find(toReplace, pos + replaceBy.length());
	}
	return replacement ;
}*/

std::string Sedpp::_replaceSubstring(const std::string& buffer, const std::string& toReplace, const std::string& replaceBy) {
    std::string result;
    size_t pos = 0;
    size_t lastPos = 0;

    while ((pos = buffer.find(toReplace, lastPos)) != std::string::npos) {
        result.append(buffer.begin() + lastPos, buffer.begin() + pos);
        result.append(replaceBy);
        lastPos = pos + toReplace.length();
    }
    result.append(buffer.begin() + lastPos, buffer.end());
    return result;
}
