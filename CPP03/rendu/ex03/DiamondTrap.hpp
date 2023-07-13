/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 22:46:16 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/07 17:06:22 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private :
		std::string			_name;

	public :
		/* Canonical Member Functions */
		DiamondTrap( void );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap( void );
		DiamondTrap &		operator=( DiamondTrap const & rhs );

		/* Member Functions */
		DiamondTrap( std::string const & name );
		void				attack(const std::string& target);
		void				whoAmI(void);
		
		int					getHitPoints(void);
		void				setHitPoints( int hitPoints );

		int					getEnergyPoints(void);
		void				setEnergyPoints( int energyPoints );

		int					getAttackDamage(void);
		void				setAttackDamage(unsigned int attackDamage);
};

#endif