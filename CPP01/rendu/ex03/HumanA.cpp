/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 19:00:51 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/31 15:54:37 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	std::cout << "\033[1;32mHumanA : \033[0m" << this->_name << "\033[1;32m created\033[0m" << std::endl;
	return ;
}

HumanA::~HumanA( void )
{
	std::cout << "\033[1;31mHumanA : \033[0m" << this->_name << "\033[1;31m destroyed\033[0m" << std::endl;
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name <<  "\033[1;32m attacks with their\033[0m " << this->_weapon.getType() << std::endl;
	return ;
}
