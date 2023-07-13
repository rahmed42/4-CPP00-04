/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:54:50 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/06 22:07:59 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "\033[1;32mClapTrap Default constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "\033[1;35mClapTrap Copy constructor called\033[0m" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "\033[1;31mClapTrap Destructor called\033[0m" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "\033[1;34mClapTrap Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

ClapTrap::ClapTrap( std::string const & name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "\033[1;32mClapTrap Named Constructor called\033[0m" << std::endl;
	std::cout << "\033[1;36mClapTrap " << this->_name << " created with : " \
	<< this->_hitPoints << " Hit point / " << this->_energyPoints << " Energy point / " \
	<< this->_attackDamage << " Attack damage" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints)
	{
		std::cout << "\033[1;33mClapTrap " << this->_name << " attacks " << target \
		<< ", causing " << this->_attackDamage << " points of damage !\033[0m" << std::endl;
		--this->_energyPoints;
	}
	else
		std::cout << "\033[1;31mClapTrap " << this->_name << " is out of energy\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "\033[1;35mTarget " << this->_name << " lost " << amount << " hit points " \
	<< this->_hitPoints << " life left !\033[0m" << std::endl;
	if (not this->_hitPoints)
		std::cout << "\033[1;31mClapTrap " << this->_name << " is out of life !\033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints)
	{
		--this->_energyPoints;
		this->_hitPoints += amount;
		std::cout << "\033[1;32mClapTrap " << this->_name << " healed by " << amount << " hit points, he has now " \
		<< this->_hitPoints << " life left !\033[0m" << std::endl;

	}
	else
		std::cout << "\033[1;31mClapTrap " << this->_name << " is out of energy\033[0m" << std::endl;
}

std::string		ClapTrap::getName(void)
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void)
{
	return (this->_hitPoints);
}

void	ClapTrap::setHitPoints( int hitPoints )
{
	this->_hitPoints = hitPoints;
}

int	ClapTrap::getEnergyPoints(void)
{
	return (this->_energyPoints);
}

void	ClapTrap::setEnergyPoints( int energyPoints )
{

	this->_energyPoints = energyPoints;
}

unsigned int	ClapTrap::getAttackDamage(void)
{
	return (this->_attackDamage);
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->_attackDamage = attackDamage;
}
