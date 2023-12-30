/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:31:59 by root              #+#    #+#             */
/*   Updated: 2023/12/29 14:36:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* *** constructor *** */

Brain::Brain( void ) {
	std::cout << DEF_B ;
}

/* *** copy constructor *** */

Brain::Brain( Brain const & cpy ) {
	std::cout << BRAIN_CPY ;
	*this = cpy ;
}

/* *** destructor *** */

Brain::~Brain( void ) {
	std::cout << DEST_B ;
}

/* *** operator = *** */

Brain &	Brain::operator=( Brain const & rhs ) {
	for (unsigned int i; i < NB_IDEAS; ++i) {
		ideas[i] = rhs.ideas[i] ;
	}
	return *this ;
}

/* *** public functions *** */

/* GETTER */

const std::string &	Brain::getIdeas( int index ) const {
	if ( static_cast<unsigned int>(index) >= NB_IDEAS ) {
		std::cerr << ERR_GET ;
		return ideas[0] ;
	}
	return ideas[index] ;
}

/* SETTER */

bool	Brain::setIdeas( int index, std::string const & idea ) {
	if ( static_cast<unsigned int>(index) >= NB_IDEAS ) {
		std::cerr << ERR_SET ;
		return false ;
	}
	ideas[index] = idea ;
	return true ;
}

/* *** private functions *** */
/* *** other *** */
