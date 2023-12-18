/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:49:59 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/16 14:54:41 by mpeulet          ###   ########.fr       */
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
		~Fixed( void );							//Coplien

		Fixed &	operator=( Fixed const & rhs );	//Coplien

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:

		int					_fixed;
		static const int	_bits = 8;

};

#endif /* *** FIXED_HPP *** */
