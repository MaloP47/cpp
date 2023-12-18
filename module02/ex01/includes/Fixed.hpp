/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:49:59 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/16 15:26:33 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define DEFAULT "Default constructor called\n"
# define COPY "Copy constructor called\n"
# define RAWBITS "getRawBits member function called\n"
# define DESTRUCTOR "Destructor called\n"
# define COPY_OPERATOR "Copy assignment operator called\n"


class	Fixed {

	public:

		Fixed( void );							//Coplien
		Fixed( Fixed const & cpy );				//Coplien

		Fixed( const int to_float );
		Fixed( const float to_fixed_comma );

		~Fixed( void );							//Coplien

		Fixed &	operator=( Fixed const & rhs );	//Coplien

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

		int					_fixed;
		static const int	_bits = 8;

};

std::ostream & operator<<( std::ostream o, Fixed const & rhs );

#endif /* *** FIXED_HPP *** */
