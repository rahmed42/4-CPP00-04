/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:55:22 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/06 22:07:29 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>

class ClapTrap
{
	private :
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		unsigned int	_attackDamage;

	public :
		/* Canonical Member Functions */
		ClapTrap( void );
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );
		ClapTrap &		operator=( ClapTrap const & rhs );

		/* Member Functions */
		ClapTrap( std::string const & name );
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		/* Getters and Setters */
		std::string		getName(void);
		int				getHitPoints(void);
		void			setHitPoints( int hitPoints );
		int				getEnergyPoints(void);
		void			setEnergyPoints( int energyPoints );
		unsigned int	getAttackDamage(void);
		void			setAttackDamage(unsigned int attackDamage);
};

#endif
