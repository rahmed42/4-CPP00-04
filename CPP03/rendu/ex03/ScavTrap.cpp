/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:34:31 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/07 17:46:40 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "\033[1;32mScavTrap Default constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[1;35mScavTrap Copy constructor called\033[0m" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "\033[1;31mScavTrap Destructor called\033[0m" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "\033[1;34mScavTrap Copy assignment operator called\033[0m" << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "\033[1;32mScavTrap Named Constructor called\033[0m" << std::endl;
	std::cout << "\033[1;36mScavTrap \033[0m" << this->getName() << "\033[1;36m created with : \033[0m" \
	<< this->getHitPoints() << "\033[1;36m Hit point / \033[0m" << this->getEnergyPoints() << "\033[1;36m Energy point / \033[0m" \
	<< this->getAttackDamage() << "\033[1;36m Attack damage\033[0m" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	int energy = this->getEnergyPoints();
	if (energy)
	{
		std::cout << "\033[1;36mScavTrap \033[0m" << this->getName() << "\033[1;36m attacks \033[0m" << target \
		<< "\033[1;36m, causing \033[0m" << this->getAttackDamage() << "\033[1;36m points of damage !\033[0m" << std::endl;
		this->setEnergyPoints(--energy);
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "\033[1;31mScavTrap \033[0m" << this->getName() << "\033[1;31m come in Gate Keeper Mod\033[0m" << std::endl;
}

int	ScavTrap::getHitPoints(void)
{
	std::cout << "\033[1;33mScavTrap getHitPoints called\033[0m" << std::endl;
	return (ClapTrap::getHitPoints());
}

int	ScavTrap::getEnergyPoints(void)
{
	std::cout << "\033[1;33mScavTrap getEnergyPoints called\033[0m" << std::endl;
	return (ClapTrap::getEnergyPoints());
}

unsigned int	ScavTrap::getAttackDamage(void)
{
	std::cout << "\033[1;33mScavTrap getAttackDamage called\033[0m" << std::endl;
	return (ClapTrap::getAttackDamage());
}
