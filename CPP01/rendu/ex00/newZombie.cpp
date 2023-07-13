/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:43:46 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 17:18:31 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* newZombie = new Zombie();
	newZombie->setName(name);
	std::cout << "\033[1;33mZombie " << name << " Still Alive after return\033[0m" << std::endl;
	return (newZombie);
}
