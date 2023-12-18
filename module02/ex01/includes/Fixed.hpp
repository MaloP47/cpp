/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:49:59 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/18 11:33:36 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define DEFAULT "Default constructor called\n"
# define COPY "Copy constructor called\n"
# define RAWBITS "\033[0;93mgetRawBits member function called\n\033[0;39m"
# define DESTRUCTOR "Destructor called\n"
# define COPY_OPERATOR "Copy assignment operator called\n"
# define INT_CONSTRUCTOR "Int constructor called\n"
# define FLOAT_CONSTRUCTOR "Float constructor called\n"


class	Fixed {

	public:

		Fixed( void );							//Coplien default constructor
		Fixed( Fixed const & cpy );				//Coplien copy constructor

		Fixed( const int int_conv );
		Fixed( const float float_conv );

		~Fixed( void );							//Coplien destructor

		Fixed &	operator=( Fixed const & rhs );	//Coplien copy assignement operator

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

		int					_fixed;
		static const int	_bits = 8;

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );

#endif /* *** FIXED_HPP *** */
