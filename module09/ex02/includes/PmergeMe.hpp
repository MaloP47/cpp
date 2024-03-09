/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:26:26 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/09 16:13:48 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <exception>
# include <algorithm>
# include <iterator>
# include <vector>
# include <list>

# include <ctime>
# include <climits>
# include <cerrno>
# include <cstring>

typedef std::vector<int>::iterator itVec ;
typedef std::list<int>::iterator itList ;

# define OPTIMIZER 20

class	PmergeMe {

	public:

		PmergeMe( char ** av ) ;
		~PmergeMe( void ) ;

	private:

		std::vector<int>	_vec ;
		std::list<int>		_list ;
		double				_vecTime ;
		double				_listTime ;

		template < typename C >
		void	printContainer( C const & container ) {
			for ( typename C::const_iterator cit = container.begin(); cit != container.end(); ++cit )
				std::cout << "[" << *cit << "]" ;
			std::cout << std::endl ;
		}

		template < typename C >
		void	printTimeElapsed( C const & container, double time, std::string const & type ) {
			std::cout << "Time to process a range of\t" << container.size()
				<< " elements with " << type << std::fixed << std::setprecision( 7 )
				<< time << " sec." << std::endl ;
		}

		bool	isSorted( void ) ;
		void	isValid( char *av ) ;

		void	parseInput( char **av ) ;
	
		void	insertionSort( itVec begin, itVec end ) ;
		void	mergeInsertionSortV( itVec begin, itVec end ) ;
		void	sortVec( void ) ;

		void	mergeInsertionSortL( itList begin, itList end ) ;
		void	sortList( void ) ;

		PmergeMe( void ) ;
		PmergeMe( PmergeMe const & cpy ) ;
		PmergeMe &	operator=( PmergeMe const & rhs ) ;

} ;

/* *** PMERGEME.HPP *** */
