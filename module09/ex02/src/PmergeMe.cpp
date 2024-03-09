/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:28:59 by mpeulet           #+#    #+#             */
/*   Updated: 2024/03/09 16:02:14 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* *** constructors *** */

PmergeMe::PmergeMe( void ) {}

PmergeMe::PmergeMe( char ** av ) {
	parseInput( av ) ;
	std::cout << "Before: " ;
	printContainer( _vec ) ;
	sortVec() ;
	sortList() ;
	std::cout << "After : " ;
	printContainer( _vec ) ;
	printTimeElapsed( _vec, _vecTime, "std::vector : ") ;
	printTimeElapsed( _list, _listTime, "std::list   : ") ;
}

/* *** copy constructor *** */

PmergeMe::PmergeMe( PmergeMe const & cpy ) { static_cast<void>( cpy ) ; }

/* *** destructor *** */

PmergeMe::~PmergeMe( void ) {}

/* *** operator = *** */

PmergeMe &	PmergeMe::operator=( PmergeMe const & rhs ) {
	static_cast<void>( rhs ) ;
	return *this ;
}

/* *** public functions *** */
	
/* *** private functions *** */

bool	PmergeMe::isSorted( void ) {
	for ( size_t i = 1; i < _vec.size(); ++i ) {
		if ( _vec[i - 1] > _vec[i] )
			return false ;
	}
	return true ;
}

void	PmergeMe::isValid( char *av ) {
	if ( !av || !std::strlen( av ) )
		throw std::runtime_error( "Error: empty argument." ) ;
	std::string	s( av ) ;
	size_t		i = s.find_first_not_of( "+- 0123456789" ) ;

	if ( i != std::string::npos )
		throw std::runtime_error( "Error: Wrong argument character found: "
			 + std::string(1, s[i] ) + "." ) ;
	if ( s.find_first_not_of( " " ) == std::string::npos )
		throw std::runtime_error( "Error: contains only space." ) ;
}

void	PmergeMe::parseInput( char **av ) {
	clock_t	start = clock() ;
	long	nb = 0 ;

	for ( unsigned int i = 1; av[i]; i++ ) {
		char	*end = NULL ;
		errno = 0 ;
		isValid( av[i] ) ;
		nb = std::strtol( av[i], &end, 10 ) ;
		if ( nb < INT_MIN || nb > INT_MAX || errno == ERANGE )
			throw std::runtime_error( "Error: int overflow: " + std::string( av[i] ) ) ;
		while ( *end ) {
			if ( !std::isspace( static_cast<char>( *end ) ) )
				throw std::runtime_error( "Error: wrong input: " + std::string( av[i] ) ) ;
			end++;
		}
		if ( nb < 0 )
			throw std::runtime_error( "Error: number would be negative: " + std::string( av[i] ) ) ;
		_vec.push_back( nb ) ;
		_list.push_back( nb ) ;
	}
	if ( isSorted() ) 
		throw std::runtime_error( "Error: numbers are already sorted." ) ;
	double	time = double( clock() - start ) / double( CLOCKS_PER_SEC ) ;
	std::cout << "\033[0;90m"
		<< "------------------------------------------------------------------------"
		<< std::endl ;
	std::cout << std::fixed << std::setprecision( 7 )
				<< "\t\t\t***Parse time***\t\t    : " << time << " sec." << std::endl ;
	std::cout << "------------------------------------------------------------------------"
		<< "\033[0;39m"	<< std::endl ;
}

void	PmergeMe::insertionSort( itVec begin, itVec end ) {
	int		value = 0 ;
	itVec	j ;

	for ( itVec i = begin + 1; i != end; ++i ) {
		value = *i ;
		j = i - 1 ;
		while ( j >= begin && *j > value ) {
			*( j + 1 ) = *j ;
			--j ;
		}
		*( j + 1 ) = value ;
	}
}

void	PmergeMe::mergeInsertionSortV( itVec begin, itVec end ) {
	int		distance = std::distance( begin, end ) ;
	itVec	mid ;

	if ( distance <= 1 )
		return ;
	if ( distance <= OPTIMIZER )
		insertionSort( begin, end ) ;
	else {
		mid = begin ;
		std::advance( mid, distance / 2 ) ;
		mergeInsertionSortV( begin, mid ) ;
		mergeInsertionSortV( mid, end ) ;
		std::inplace_merge( begin, mid, end ) ;
	}
}

void	PmergeMe::sortVec( void ) {
	clock_t	start = clock() ;

	mergeInsertionSortV( _vec.begin(), _vec.end() ) ;
	_vecTime = double( clock() - start ) / double( CLOCKS_PER_SEC ) ;
}

void	PmergeMe::mergeInsertionSortL( itList begin, itList end ) {
	int		distance = std::distance( begin, end ) ;
	itList	mid ;

	if ( distance <= 1 )
		return ;
	mid = begin ;
	std::advance( mid, distance / 2 ) ;
	mergeInsertionSortL( begin, mid ) ;
	mergeInsertionSortL( mid, end ) ;
	std::inplace_merge( begin, mid, end ) ;
}

void	PmergeMe::sortList( void ) {
	clock_t	start = clock() ;

	// _list.sort() ;
	mergeInsertionSortL( _list.begin(), _list.end() ) ;
	_listTime = double( clock() - start ) / double( CLOCKS_PER_SEC ) ;
}

/* *** other *** */
