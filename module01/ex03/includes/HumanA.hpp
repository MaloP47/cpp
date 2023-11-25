/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:04:16 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 21:42:22 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {

	public:

		HumanA( void );
		~HumanA( void );

	private:

		const std::string	_name;
		const Weapon		&_weapon;
	
};

#endif
