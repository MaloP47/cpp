/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:40:46 by mpeulet           #+#    #+#             */
/*   Updated: 2024/02/22 17:06:59 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* *** private functions *** */

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( ScalarConverter const & cpy ) {
	static_cast<void>( cpy );
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const & rhs ) {
	static_cast<void>( rhs );
	return *this ;
}

bool	ScalarConverter::isChar( const std::string & literal, char *c) {
	if ( literal.size() ==  3 && literal[0] == 39 && literal[2] == 39 ) {
		*c = static_cast<char>( literal[1] ) ;
		return true ;
	}
	else if ( literal.size() == 1 ) {
		*c = static_cast<char>( literal[0] ) - 48 ;
		return true ;
	}
	return false ;
}

void	ScalarConverter::fromChar( char c ) {
	if ( !std::isprint( c ) ) {
		std::cout << "char : Non displayable\n"
					<< "int: " << static_cast<int>( c ) << "\n"
					<< "float: " << std::fixed << std::setprecision( 1 ) << static_cast<float>( c ) << "f\n"
					<< "double: " << std::fixed << std::setprecision( 1 ) << static_cast<double>( c ) << "\n" ;
	}
	else
		std::cout << "char : " << "\'" << c << "\'\n"
					<< "int: " << static_cast<int>( c ) << "\n"
					<< "float: " << std::fixed << std::setprecision( 1 ) << static_cast<float>( c ) << "f\n"
					<< "double: " << std::fixed << std::setprecision( 1 ) << static_cast<double>( c ) << "\n" ;
}

bool	ScalarConverter::isInt( const std::string & literal, int *n ) {
	char	*endptr ;
	long	nb = std::strtol( literal.c_str(), &endptr, 10 ) ;
	if ( endptr == literal.c_str() || *endptr != 0 )
		return false ;
	if ( nb > INT_MAX || nb < INT_MIN )
		return false ;
	*n = nb ;
	return true ;
}

void	ScalarConverter::fromInt( int n ) {
	if ( n >= std::numeric_limits<char>::min() && n <= std::numeric_limits<char>::max() ) {
		if ( std::isprint( static_cast<int>( n ) ) )
			std::cout << "char : " << "\'" << static_cast<char>( n ) << "\'\n" ;
		else
			std::cout << "char : Non displayable\n" ;
	}
	else
		std::cout << "char: impossible\n" ;
	std::cout << "int: " << n << "\n" ;
	std::cout << "float: " << std::fixed << std::setprecision( 1 ) << static_cast<float>( n ) << "f\n" ;
	std::cout << "double: " << std::fixed << std::setprecision( 1 ) << static_cast<double>( n ) << "\n" ;
}

bool	ScalarConverter::isFloat( const std::string & literal, float *f ) {
	char		*endptr ;
	*f = std::strtod( literal.c_str(), &endptr ) ;
	if ( endptr == literal.c_str() || *endptr != 'f' )
		return false ;
	if ( *endptr == 'f' && ( endptr + 1 && *( endptr + 1 ) != 0 ) )
		return false ;
	*f = std::atof( literal.c_str() ) ;
	return true ;
}

void	ScalarConverter::fromFloat( float f ) {
	if ( f >= std::numeric_limits<char>::min() && f <= std::numeric_limits<char>::max() ) {
		if ( std::isprint( static_cast<int>( f) ) )
			std::cout << "char : " << "\'" << static_cast<char>( f ) << "\'\n" ;
		else
			std::cout << "char : Non displayable\n" ;
	}
	else
		std::cout << "char: impossible\n" ;
	if ( f > std::numeric_limits<int>::min() -1.0f && f < std::numeric_limits<int>::max() + 1.0f ) 
		std::cout << "int: " << static_cast<int>( f ) << "\n" ;
	else 
		std::cout << "int: impossible\n" ;
	std::cout << "float: " << std::fixed << std::setprecision( 1 ) << f << "f\n" ;
	std::cout << "double: " << std::fixed << std::setprecision( 1 ) << static_cast<double>( f ) << "\n" ;
}

bool	ScalarConverter::isDouble( const std::string & literal, double * d ) {
	char	*endptr ;
	size_t	pos = literal.find( '.' ) ;
	if ( pos == std::string::npos )
		return false ;
	*d = std::strtold( literal.c_str(), &endptr ) ;
	if ( endptr == literal.c_str() || *endptr != 0 )
		return false ;
	return true ;
}

void	ScalarConverter::fromDouble( double d ) {
	if ( d >= std::numeric_limits<char>::min() && d <= std::numeric_limits<char>::max() ) {
		if ( std::isprint( static_cast<int>( d ) ) )
			std::cout << "char : " << "\'" << static_cast<char>( d ) << "\'\n" ;
		else
			std::cout << "char : Non displayable\n" ;
	}
	else
		std::cout << "char: impossible\n" ;
	if ( d > std::numeric_limits<int>::min() -1.0 && d < std::numeric_limits<int>::max() + 1.0 ) 
		std::cout << "int: " << static_cast<int>( d ) << "\n" ;
	else 
		std::cout << "int: impossible\n" ;
	if ( d >= std::numeric_limits<float>::min() && d < std::numeric_limits<float>::max() ) 
		std::cout << "float: " << std::fixed << std::setprecision( 1 ) << static_cast<float>( d ) << "f\n" ;
	else 
		std::cout << "float: impossible\n" ;
	std::cout << "double: " << std::fixed << std::setprecision( 1 ) << d << "\n" ;
}

bool	ScalarConverter::isPseudo( const std::string & literal, float *f, double * d ) {
	if ( literal == "inf" || literal == "+inf" || literal == "inff" || literal == "+inff" ) {
		*f = std::numeric_limits<float>::infinity() ;
		*d = std::numeric_limits<double>::infinity() ;
		return true ;
	}
	if ( literal == "-inf" || literal == "-inff" ) {
		*f = -std::numeric_limits<float>::infinity() ;
		*d = -std::numeric_limits<double>::infinity() ;
		return true ;
	}
	if ( literal == "nan" || literal == "nanf" ) {
		*f = std::numeric_limits<float>::quiet_NaN() ;
		*d = std::numeric_limits<double>::quiet_NaN() ;
		return true ;
	}
	return false ;
}

void	ScalarConverter::fromPseudo( float * f, double * d ) {
	std::cout << "char: impossible\n"
				<< "int: impossible\n"
				<< "float: " <<  *f << "f\n"
				<< "double: " <<  *d << "\n" ;
}

literalType	ScalarConverter::detemineType( const std::string & literal , char *c, int *n, float *f, double *d) {
	 if (literal.empty()) return NONE;
    else if (isPseudo(literal, f, d)) return PSEUDO;
    else if (isChar(literal, c)) return CHAR;
    else if (isInt(literal, n)) return INT;
    else if (isFloat(literal, f)) return FLOAT;
    else if (isDouble(literal, d)) return DOUBLE;
    else return INVALID;
} 

/* *** public functions *** */

ScalarConverter::~ScalarConverter( void ) {}

void	ScalarConverter::convert( const std::string & literal ) {
	
	char	c = 0 ;
	int		n = 0;
	float	f = 0;
	double	d = 0;

	literalType type = detemineType( literal, &c, &n, &f, &d ) ;

	 switch (type) {
        case NONE:
            std::cout << "Needs at least one character to use properly.\n";
            break;
        case PSEUDO:
            fromPseudo( &f, &d ) ;
            break;
        case CHAR:
			fromChar( c ) ;
            break;
        case INT:
			fromInt( n ) ;
            break;
        case FLOAT:
            fromFloat( f ) ;
            break;
        case DOUBLE:
            fromDouble( d ) ;
            break;
        default:
            std::cout << "Wrong format or possible overflow.\n" ;
    }
}
