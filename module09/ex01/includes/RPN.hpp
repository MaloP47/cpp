/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:22:21 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/08 10:28:36 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <limits>
# include <exception>
# include <stack>
# include <algorithm>

# include <climits>

class RPN {

	public:

		RPN( std::string const & input ) ;
		~RPN( void ) ;

		std::stack<int> const &	getPile( void ) const ;
		std::string const &		getInput( void ) const ;

	private:

		std::stack< int >	_pile ;
		std::string			_input ;

		void	parseInput( void ) ;

		int		add( int x, int y ) ;
		int		substract( int x, int y ) ;
		int		multiply( int x, int y ) ;
		int		divide( int x, int y ) ;
		void	evaluate( void ) ;

		RPN( void ) ;
		RPN( RPN const & cpy ) ;
		RPN &	operator=( RPN const & rhs ) ;

} ;

/* *** RPN.HPP *** */
