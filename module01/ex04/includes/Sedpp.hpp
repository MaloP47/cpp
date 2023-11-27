/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedpp.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:35:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/27 10:34:09 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDPP_HPP
# define SEDPP_HPP

# include <fstream>
# include <string>

# define IN_ERR "Failed to open input file: "
# define OUT_ERR "Failed to open output file: "

class	Sedpp {

	public:

		Sedpp( const std::string& inputFile, const std::string& outpoutFile );
		~Sedpp( void );

	private:

		std::ifstream	_ifs;
		std::ofstream	_ofs;
};

#endif /* *** SEDPP_HPP *** */