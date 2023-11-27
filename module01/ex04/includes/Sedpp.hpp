/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedpp.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:35:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/27 21:23:55 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDPP_HPP
# define SEDPP_HPP

# include <fstream>
# include <string>
# include <iostream>

# define IN_ERR "Failed to open input file: "
# define OUT_ERR "Failed to open output file: "

class	Sedpp {

	public:

		Sedpp( const std::string& inputFile, const std::string& outpoutFile );
		~Sedpp( void );
		
		void	replace( const std::string& toReplace, const std::string& replaceBy );

	private:

		std::ifstream	_ifs;
		std::ofstream	_ofs;

		std::string		_replaceSubstring( const std::string& buffer, const std::string& toReplace, const std::string& replaceBy );
};

#endif /* *** SEDPP_HPP *** */