/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:49:59 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/18 14:54:26 by mpeulet          ###   ########.fr       */
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

		/* comparison operators */

		bool	operator>( Fixed const & rhs ) const ;
		bool	operator<( Fixed const & rhs ) const ;
		bool	operator>=( Fixed const & rhs ) const ;
		bool	operator<=( Fixed const & rhs ) const ;
		bool	operator==( Fixed const & rhs ) const ;
		bool	operator!=( Fixed const & rhs ) const ;

		/* arithmetic operators */
	
		Fixed	operator+( Fixed const &rhs ) const ;
		Fixed	operator-( Fixed const &rhs ) const ;
		Fixed	operator*( Fixed const &rhs ) const ;
		Fixed	operator/( Fixed const &rhs ) const ;

		/* increment / decrement operators*/

		// Post
		Fixed &	operator++( void ) ;
		Fixed &	operator--( void ) ;

		// Pre
		Fixed	operator++( int ) ;
		Fixed	operator--( int ) ;

		/* min / max */

		static Fixed &			min( Fixed & a, Fixed & b ) ;
		static Fixed &			max( Fixed & a, Fixed & b ) ;

		static const Fixed &	min( const Fixed & a, const Fixed & b ) ;
		static const Fixed &	max( const Fixed & a, const Fixed & b ) ;

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
