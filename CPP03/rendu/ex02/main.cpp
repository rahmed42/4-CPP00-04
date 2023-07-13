/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/06 22:41:25 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <cstdlib>

int	main( void )
{
	FragTrap		warrior("Rambo");
	ScavTrap		scav("iRobot");

	std::cout << "\033[1;31mFIGHT !\033[0m" << std::endl;

	while ((warrior.getHitPoints() > 0 and scav.getHitPoints() > 0) \
	and (warrior.getEnergyPoints() > 0 or scav.getEnergyPoints() > 0))
	{
		if (warrior.getEnergyPoints() > 0)
		{
			warrior.attack(scav.getName());
			scav.takeDamage(warrior.getAttackDamage());
			if (not scav.getHitPoints())
				break ;
		}
		if (scav.getEnergyPoints() > 0 and scav.getHitPoints() < 50)
		{
			scav.beRepaired(rand() % 30);
			scav.guardGate();
		}

		if (scav.getEnergyPoints() > 0)
		{
			scav.attack(warrior.getName());
			warrior.takeDamage(scav.getAttackDamage());
			if (not warrior.getHitPoints())
				break ;
		}
		if (warrior.getEnergyPoints() > 0 and warrior.getHitPoints() < 50)
		{
			warrior.beRepaired(rand() % 30);
			warrior.highFivesGuys();
		}
	}
	if (warrior.getHitPoints() == 0)
		std::cout << "\033[1;31m" << warrior.getName() << " is dead !\033[0m" << std::endl;
	if (scav.getHitPoints() == 0)
		std::cout << "\033[1;31m" << scav.getName() << " is dead !\033[0m" << std::endl;
	else if (scav.getEnergyPoints() == 0 and warrior.getEnergyPoints() == 0)
		std::cout << "\033[1;31mNo more energy for all !\033[0m" << std::endl;

	return 0;
}
