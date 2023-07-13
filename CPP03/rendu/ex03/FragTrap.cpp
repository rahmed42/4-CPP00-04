/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 22:03:47 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/07 17:46:31 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "\033[1;32mFragTrap Default constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	std::cout << "\033[1;35mFragTrap Copy constructor called\033[0m" << std::endl;
	*this = src;
}

FragTrap::~FragTrap( void )
{
	std::cout << "\033[1;31mFragTrap Destructor called\033[0m" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "\033[1;34mFragTrap Copy assignment operator called\033[0m" << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "\033[1;32mFragTrap Named Constructor called\033[0m" << std::endl;
	std::cout << "\033[1;36mFragTrap \033[0m" << this->getName() << "\033[1;36m created with : \033[0m" \
	<< this->getHitPoints() << "\033[1;36m Hit point / \033[0m" << this->getEnergyPoints() << "\033[1;36m Energy point / \033[0m" \
	<< this->getAttackDamage() << "\033[1;36m Attack damage\033[0m" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	int energy = this->getEnergyPoints();
	if (energy)
	{
		std::cout << "\033[1;36mFragTrap \033[0m" << this->getName() << "\033[1;36m attacks \033[0m" << target \
		<< "\033[1;36m, causing \033[0m" << this->getAttackDamage() << "\033[1;36m points of damage !\033[0m" << std::endl;
		this->setEnergyPoints(--energy);
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[1;31mFragTrap \033[0m" << this->getName() << "\033[1;31m highFives Guys !!!! \033[0m" << std::endl;
}

int	FragTrap::getHitPoints(void)
{
	std::cout << "\033[1;33mFragTrap getHitPoints called\033[0m" << std::endl;
		return (ClapTrap::getHitPoints());
}

int	FragTrap::getEnergyPoints(void)
{
	std::cout << "\033[1;33mFragTrap getEnergyPoints called\033[0m" << std::endl;
	return (ClapTrap::getEnergyPoints());
}

unsigned int	FragTrap::getAttackDamage(void)
{
	std::cout << "\033[1;33mFragTrap getAttackDamage called\033[0m" << std::endl;
	return (ClapTrap::getAttackDamage());
}
