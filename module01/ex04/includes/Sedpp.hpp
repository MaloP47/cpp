/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sedpp.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:35:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/26 18:01:04 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDPP_HPP
# define SEDPP_HPP

# include <fstream>

class	Sedpp {

	public:

		Sedpp( const std::ifstream& ifs, const std::ofstream& ofs );
		~Sedpp( void );

	private:

		std::ifstream	&_ifs;
		std::ofstream	&_ofs;
};

#endif /* *** SEDPP_HPP *** */