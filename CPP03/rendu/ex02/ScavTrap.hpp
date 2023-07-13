/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:34:33 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/06 21:09:16 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		/* Canonical Member Functions */
		ScavTrap( void );
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );
		ScavTrap &		operator=( ScavTrap const & rhs );

		/* Member Functions */
		ScavTrap( std::string const & name );
		void			attack(const std::string& target);
		void			guardGate(void);
};

#endif