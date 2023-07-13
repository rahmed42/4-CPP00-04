/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:52:49 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 19:59:53 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_HPP
# define HUMAN_B_CLASS_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private :
		std::string	_name;
		Weapon*		_weapon;
	public :
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon& weapon);
};

#endif