/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 19:00:51 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/31 16:04:46 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "\033[1;32mHumanB : \033[0m" << this->_name << "\033[1;32m created\033[0m" << std::endl;
	return ;
}

HumanB::~HumanB( void )
{
	std::cout << "\033[1;31mHumanB : \033[0m" << this->_name << "\033[1;31m destroyed\033[0m" << std::endl;
	return ;
}

void	HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name << "\033[1;32m attacks with their\033[0m " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << "\033[1;33m Doesn't have any weapon to attack\033[0m" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
