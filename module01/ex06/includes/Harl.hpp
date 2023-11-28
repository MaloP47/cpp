/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:50:58 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/28 18:51:11 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

# define DEBUG_MESS "\033[5;92m[DEBUG]\033[0;39m"

# define INFO_MESS "\033[5;94m[INFO]\033[0;39m"

# define WARNING_MESS "\033[5;93m[WARNING]\033[0;39m"

# define ERROR_MESS "\033[5;91m[ERROR]\033[0;39m"

# define UNKNOWN "Harl doesn't recognize this level"

class   Harl {

    public:

        Harl( void );
        ~Harl( void );

        void    complain( std::string level);
        void    complainLevels( std::string level);

    private:

        void    _debug( void );
        void    _info( void );
        void    _warning( void );
        void    _error( void );

};

#endif /* *** HARL_HPP *** */
