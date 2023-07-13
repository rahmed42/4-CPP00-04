/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 22:46:13 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/07 17:32:43 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "\033[1;32mDiamondTrap Default constructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	std::cout << "\033[1;35mDiamondTrap Copy constructor called\033[0m" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "\033[1;31mDiamondTrap Destructor called\033[0m" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "\033[1;34mDiamondTrap Copy assignment operator called\033[0m" << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

DiamondTrap::DiamondTrap( std::string const & name ) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "\033[1;32mDiamondTrap Name Constructor called\033[0m" << std::endl;
	this->setHitPoints(100);
	this->setAttackDamage(30);
	this->setEnergyPoints(50);
	std::cout << "\033[1;36mDiamondTrap " << this->_name << " created with : " \
	<< this->getHitPoints() << " Hit point / " << this->getEnergyPoints() << " Energy point / " \
	<< this->getAttackDamage() << " Attack damage" << std::endl;
}

void	DiamondTrap::attack( const std::string& target )
{
	std::cout << "\033[1;32mDiamondTrap attack called\033[0m" << std::endl;
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "\033[1;32mDiamondTrap whoAmI called\033[0m" << std::endl;
	std::cout << "\033[1;36mDiamondTrap name : " << this->_name << " / ClapTrap Name : \033[0m" << this->getName() << std::endl;
}


int	DiamondTrap::getHitPoints( void )
{
	std::cout << "\033[1;33mDiamondTrap getHitPoints called\033[0m" << std::endl;
	return (FragTrap::getHitPoints());
}

void	DiamondTrap::setHitPoints( int hitPoints )
{
	std::cout << "\033[1;33mDiamondTrap setHitPoints called\033[0m" << std::endl;
	FragTrap::setHitPoints(hitPoints);
}


int	DiamondTrap::getEnergyPoints( void )
{
	std::cout << "\033[1;33mDiamondTrap getEnergyPoints called\033[0m" << std::endl;
	return (ScavTrap::getEnergyPoints());
}

void	DiamondTrap::setEnergyPoints( int energyPoints )
{
	std::cout << "\033[1;33mDiamondTrap setEnergyPoints called\033[0m" << std::endl;
	ScavTrap::setEnergyPoints(energyPoints);
}


int	DiamondTrap::getAttackDamage( void )
{
	std::cout << "\033[1;33mDiamondTrap getAttackDamage called\033[0m" << std::endl;
	return (FragTrap::getAttackDamage());
}

void	DiamondTrap::setAttackDamage(unsigned int attackDamage)
{
	std::cout << "\033[1;33mDiamondTrap setAttackDamage called\033[0m" << std::endl;
	FragTrap::setAttackDamage(attackDamage);
}
