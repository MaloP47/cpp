/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <mpeulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:25:08 by mpeulet           #+#    #+#             */
/*   Updated: 2023/12/20 15:08:06 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define DEFAULT "Default constructor called "
# define COPY "Copy constructor called "
# define CONSTRUCTOR "Constructor called "
# define COPY_OPERATOR "Copy assignment operator called\n"
# define DESTRUCTOR "Destructor called "
# define CLAP "ClapTrap "
# define DEAD "because she/he is dead...\n"
# define NRG "because her/his is energy is drained out...\n"
# define CT_ATT " can't attack "
# define CT_DAM " can't take damage "
# define CT_REP " can't repair "
# define ATT " attacks "
# define DAMAGE " causing damage ! Damage caused: "
# define CRIT "Critical hit ! "
# define HIT " took a vicious hit causing "
# define HPL " hit points left!!!\n"
# define MNRG " is feeling stronger ! "
 
class	ClapTrap {

	public:

		ClapTrap( void );								//Coplien default constructor
		ClapTrap( const std::string & name );			
		ClapTrap( ClapTrap const & cpy);				//Coplien copy constructor
		~ClapTrap( void );								//Coplien destructor
		ClapTrap &	operator=( ClapTrap const & rhs );	//Coplien copy assignement operator

		const std::string &		getName( void ) const ;
		const unsigned int &	getHitPoints( void ) const ;
		const unsigned int &	getEnergyPoints( void ) const ;
		const unsigned int &	getAttackDamage( void ) const ;

		bool					setHitPoints( int HP ) ;
		bool					setEnergyPoints( int EP ) ;
		bool					setAttackDamage( int AD ) ;

		void					attack( const std::string& target );
		void					takeDamage( unsigned int amount );
		void					beRepaired( unsigned int amount );

	protected:

		std::string				_Name;
		unsigned int			_HitPoints;
		unsigned int			_EnergyPoints;
		unsigned int			_AttackDamage;

};

#endif /* CLAPTRAP_HPP */
