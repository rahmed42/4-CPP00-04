/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 22:03:45 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/06 22:31:07 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		/* Canonical Member Functions */
		FragTrap( void );
		FragTrap( FragTrap const & src );
		~FragTrap( void );
		FragTrap &		operator=( FragTrap const & rhs );

		/* Member Functions */
		FragTrap( std::string const & name );
		void			attack(const std::string& target);
		void			highFivesGuys(void);
};

#endif