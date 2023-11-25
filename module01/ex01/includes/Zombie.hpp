/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:39:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 16:01:12 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

# define ZOMBIE_ANNONCE " : BraiiiiiiinnnzzzZ..."
# define ZOMBIE_DIED " died... again..."

class	Zombie {
	
	public:

		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );

		std::string 	getZombieName() const;

		void			setName( const std::string& name );

	private:

		std::string		_name;

};

Zombie*		zombieHorde( int N, std::string name);

#endif