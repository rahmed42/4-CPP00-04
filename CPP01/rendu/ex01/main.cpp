/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 18:11:19 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombies = zombieHorde(askNbZombie(), askName());
	std::cout << "\033[1;33mHorde of Zombie Will be destructed with Delete\033[0m" << std::endl;
	delete [] zombies;
	return (0);
}
