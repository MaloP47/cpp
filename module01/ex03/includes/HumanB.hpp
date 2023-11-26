/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:04:48 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/26 15:16:16 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

# define ATTACK " attacks with their "

class HumanB {

	public:

		HumanB( const std::string& name );
		~HumanB( void );

		const std::string		&getName() const;
		void					setName( const std::string& name );
		void					setWeapon( Weapon& newWeapon);

		void					attack( void ) const;

	private:

		std::string		_name;
		Weapon			*_weapon;
	
};

#endif
