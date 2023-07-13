/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/06 20:26:18 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>
#include <time.h>

int	main( void )
{
	ClapTrap		warrior("War");
	ClapTrap		wizzard("Wizz");
	int				atkPow;

	srand(time(NULL));
	std::cout << "\033[1;31mFIGHT !\033[0m" << std::endl;

	while ((warrior.getHitPoints() > 0 and wizzard.getHitPoints() > 0) \
	and (warrior.getEnergyPoints() > 0 or wizzard.getEnergyPoints() > 0))
	{
		atkPow = rand() % 10;
		warrior.setAttackDamage(atkPow);
		if (warrior.getEnergyPoints() > 0)
		{
			warrior.attack(wizzard.getName());
			wizzard.takeDamage(atkPow);
			if (not wizzard.getHitPoints())
				break ;
		}
		if (wizzard.getEnergyPoints() > 0 and wizzard.getHitPoints() < 5)
			wizzard.beRepaired(rand() % 10);

		atkPow = rand() % 10;
		wizzard.setAttackDamage(atkPow);
		if (wizzard.getEnergyPoints() > 0)
		{
			wizzard.attack(warrior.getName());
			warrior.takeDamage(atkPow);
			if (not warrior.getHitPoints())
				break ;
		}
		if (warrior.getEnergyPoints() > 0 and warrior.getHitPoints() < 5)
			warrior.beRepaired(rand() % 10);
	}
	if (warrior.getHitPoints() == 0)
		std::cout << "\033[1;31m" << warrior.getName() << " is dead !\033[0m" << std::endl;
	if (wizzard.getHitPoints() == 0)
		std::cout << "\033[1;31m" << wizzard.getName() << " is dead !\033[0m" << std::endl;
	else if (wizzard.getEnergyPoints() == 0 and warrior.getEnergyPoints() == 0)
		std::cout << "\033[1;31mNo more energy for all !\033[0m" << std::endl;

	return 0;
}
