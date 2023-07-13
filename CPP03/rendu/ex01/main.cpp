/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/06 22:20:26 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>
#include <time.h>

int	main( void )
{
	ClapTrap		warrior("War");
	ScavTrap		scav("iRobot");
	int				atkPow;

	srand(time(NULL));
	std::cout << "\033[1;31mFIGHT !\033[0m" << std::endl;

	warrior.beRepaired(rand() % 100);
	while ((warrior.getHitPoints() > 0 and scav.getHitPoints() > 0) \
	and (warrior.getEnergyPoints() > 0 or scav.getEnergyPoints() > 0))
	{
		atkPow = rand() % 100;
		if (atkPow > 50)
			scav.guardGate();
		warrior.setAttackDamage(atkPow);
		if (warrior.getEnergyPoints() > 0)
		{
			warrior.attack(scav.getName());
			scav.takeDamage(atkPow);
			if (not scav.getHitPoints())
				break ;
		}
		if (scav.getEnergyPoints() > 0 and scav.getHitPoints() < 50)
			scav.beRepaired(rand() % 100);
		if (scav.getEnergyPoints() > 0)
		{
			scav.attack(warrior.getName());
			warrior.takeDamage(atkPow);
			if (not warrior.getHitPoints())
				break ;
		}
		if (warrior.getEnergyPoints() > 0 and warrior.getHitPoints() < 50)
			warrior.beRepaired(rand() % 100);
	}
	if (warrior.getHitPoints() == 0)
		std::cout << "\033[1;31m" << warrior.getName() << " is dead !\033[0m" << std::endl;
	if (scav.getHitPoints() == 0)
		std::cout << "\033[1;31m" << scav.getName() << " is dead !\033[0m" << std::endl;
	else if (scav.getEnergyPoints() == 0 and warrior.getEnergyPoints() == 0)
		std::cout << "\033[1;31mNo more energy for all !\033[0m" << std::endl;

	return 0;
}
