/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:04:16 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/26 13:23:23 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

# define ATTACK " attacks with their "

class	HumanA {

	public:

		HumanA( const std::string& name, const Weapon& type );
		~HumanA( void );

		const std::string		&getName() const;
		void					setName( const std::string& name );

		void					attack( void ) const ;

	private:

		std::string			_name;
		const Weapon		&_weapon;
	
};

#endif
