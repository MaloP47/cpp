/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:28:59 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/08 17:29:37 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* *** constructors *** */

// PmergeMe::PmergeMe( void ) {}
PmergeMe::PmergeMe( char ** av ) {
	parseInput( av ) ;
	std::cout << "Before: " ;
	printContainer( _vec ) ;
	sortVec() ;
	sortList() ;
	std::cout << "After : " ;
	printContainer( _vec ) ;
	printTimeElapsed( _vec, _vecTime, "std::vector : ") ;
	printTimeElapsed( _vec, _vecTime, "std::list   : ") ;
}

/* *** copy constructor *** */

// PmergeMe::PmergeMe( PmergeMe const & cpy ) {}

/* *** destructor *** */

PmergeMe::~PmergeMe( void ) {}

/* *** operator = *** */

// PmergeMe &	PmergeMe::operator=( PmergeMe const & rhs ) {}

/* *** public functions *** */

std::vector<int> const &	PmergeMe::getVec( void ) const { return _vec ; }
std::list<int> const &		PmergeMe::getList( void ) const { return _list ; }
	
/* *** private functions *** */

bool	PmergeMe::isSorted( void ) {
	for ( size_t i = 1; i < _vec.size(); ++i ) {
		if ( _vec[i - 1] > _vec[i] )
			return false ;
	}
	return true ;
}

void	PmergeMe::parseInput( char **av ) {
	clock_t	start = clock() ;
	long	nb = 0 ;
	char	*end ;

	for ( unsigned int i = 1; av[i]; i++ ) {
		nb = std::strtol( av[i], &end, 10 ) ;
		if ( nb < INT_MIN || nb > INT_MAX || !end || *end != 0 || nb < 0 )
			throw std::runtime_error( "Error: wrong input: " + std::string( av[i] ) ) ;
		_vec.push_back( nb ) ;
		_list.push_back( nb ) ;
	}
	if ( isSorted() ) 
		throw std::runtime_error( "Error: numbers are already sorted." ) ;
	double	time = double( clock() - start ) / double( CLOCKS_PER_SEC ) ;
	std::cout << "\033[0;90m"
		<< "------------------------------------------------------------------------"
		<< std::endl ;
	std::cout << std::fixed << std::setprecision( 5 )
				<< "\t\t\t***Parse time***\t\t    : " << time << " sec." << std::endl ;
	std::cout << "------------------------------------------------------------------------"
		<< "\033[0;39m"	<< std::endl ;
}

void	PmergeMe::sortVec( void ) {
	clock_t	start = clock() ;

	// sort vec
	_vecTime = double( clock() - start ) / double( CLOCKS_PER_SEC ) ;
}

void	PmergeMe::sortList( void ) {
	clock_t	start = clock() ;

	// sort list
	_listTime = double( clock() - start ) / double( CLOCKS_PER_SEC ) ;
}

/* *** other *** */
