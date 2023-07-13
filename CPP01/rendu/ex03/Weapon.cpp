/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 19:00:51 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 19:56:36 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	std::cout << "\033[1;32mWeapon created\033[0m" << std::endl;
	this->_type = type;
	return ;
}

Weapon::~Weapon( void )
{
	std::cout << "\033[1;31mWeapon destroyed\033[0m" << std::endl;
	return ;
}

std::string Weapon::getType( void ) const
{
	return (this->_type);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}
