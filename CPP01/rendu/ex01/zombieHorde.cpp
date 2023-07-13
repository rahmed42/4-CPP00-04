/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:29:49 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 18:08:17 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie*	zombies = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		zombies[i].setName(name);
		std::cout << "\033[1;33mZombie N" << i + 1 << ": \033[0m";
		zombies[i++].announce();
	}
	return (zombies);
}
