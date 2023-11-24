/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:39:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/24 15:18:08 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H_
# define _ZOMBIE_H_

# include <string>
# include <iostream>

# define ZOMBIE_ANNONCE " : BraiiiiiiinnnzzzZ..."

class	Zombie {
	
	public:

		Zombie( void );
		~Zombie( void );

		void	announce( void );

		std::string 	getZombieName() const;

	private:

		std::string		_name;

};

#endif