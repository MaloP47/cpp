/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:39:04 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 15:16:06 by mpeulet          ###   ########.fr       */
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

		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );

		std::string 	getZombieName() const;

		void			setName( const std::string& name );

	private:

		std::string		_name;

};

Zombie		*newZombie( std::string name );
void		randomChump( std::string name );

#endif