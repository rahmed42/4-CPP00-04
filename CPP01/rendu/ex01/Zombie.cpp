/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 18:04:29 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "\033[1;32mZombie Created\033[0m" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "\033[1;31mKilled zombie \033[0m" << this->_name << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << this->_name << "\033[1;35m: BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

std::string askName( void )
{
	std::string	entry;

	std::cout << "\033[1;32m->>>Enter name of Zombie :\033[0m " << std::endl;
	while (std::getline(std::cin, entry))
	{
		if (not entry.empty())
			return (entry);
		std::cout << "\033[1;32m->>>Enter name of Zombie :\033[0m " << std::endl;
	}
	return (entry);
}

int	askNbZombie( void )
{
	int			nbOfZombies;
	std::string	entry;

	std::cout << "\033[1;32m->>>Enter number of Zombies : \033[0m" << std::endl;
	while (std::getline(std::cin, entry))
	{
		if (not entry.empty())
		{
			nbOfZombies = atoi(entry.c_str());
			if (nbOfZombies >= 0)
				return (nbOfZombies);
		}
		std::cout << "\033[1;32m->>>Enter number of Zombies : \033[0m" << std::endl;
	}
	return (nbOfZombies);
}
