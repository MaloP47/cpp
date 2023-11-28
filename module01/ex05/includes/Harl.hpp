/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:50:58 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/28 17:49:57 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

# define DEBUG_MESS "\033[5;92m[DEBUG]\033[0;39m\nDebug messages contain contextual information. They are mostly used for problem diagnosis.\
Example: ""I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"""

# define INFO_MESS "\033[5;94m[INFO]\033[0;39m\nThese messages contain extensive information. They are helpful for tracing program execution\
 in a production environment. Example: ""I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!"""

# define WARNING_MESS "\033[5;93m[WARNING]\033[0;39m\nWarning messages indicate a potential issue in the system. However, it can be handled\
 or ignored. Example: ""I think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month."""

# define ERROR_MESS "\033[5;91m[ERROR]\033[0;39m\nThese messages indicate an unrecoverable error has occurred. This is usually a critical issue\
 that requires manual intervention. Example: ""This is unacceptable! I want to speak to the manager now."""

# define UNKNOWN "Harl doesn't recognize this level"

class   Harl {

    public:

        Harl( void );
        ~Harl( void );

        void    complain( std::string level);

    private:

        void    _debug( void );
        void    _info( void );
        void    _warning( void );
        void    _error( void );

};

#endif /* *** HARL_HPP *** */
