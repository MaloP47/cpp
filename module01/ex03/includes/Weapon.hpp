/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:03:53 by mpeulet           #+#    #+#             */
/*   Updated: 2023/11/25 21:26:51 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon {

	public:

	Weapon( const std::string type );
	~Weapon( void );

	const std::string		&getType() const;

	void			setType( const std::string& type );

	private:

	std::string		_type;
};

#endif
