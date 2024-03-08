/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:26:26 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/08 17:27:59 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <exception>
# include <algorithm>
# include <vector>
# include <list>

# include <ctime>
# include <climits>

class	PmergeMe {

	public:

		PmergeMe( char ** av ) ;
		~PmergeMe( void ) ;

		std::vector<int> const &	getVec( void ) const ;
		std::list<int> const &		getList( void ) const ;
		
		template < typename C >
		void	printContainer( C const & container ) {
			for ( typename C::const_iterator cit = container.begin(); cit != container.end(); ++cit )
				std::cout << "[" << *cit << "]" ;
			std::cout << std::endl ;
		}

	private:

		std::vector<int>	_vec ;
		std::list<int>		_list ;
		double				_vecTime ;
		double				_listTime ;

		template < typename C >
		void	printTimeElapsed( C const & container, double time, std::string const & type ) {
			std::cout << "Time to process a range of\t" << container.size()
				<< " elements with " << type << std::fixed << std::setprecision( 5 )
				<< time << " sec." << std::endl ;
		}

		bool	isSorted( void ) ;

		void	parseInput( char **av ) ;
		void	sortVec( void ) ;
		void	sortList( void ) ;

		PmergeMe( void ) ;
		PmergeMe( PmergeMe const & cpy ) ;
		PmergeMe &	operator=( PmergeMe const & rhs ) ;

} ;

/* *** PMERGEME.HPP *** */
