/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:43:44 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 17:13:23 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie zombie;

	zombie.setName(name);
	zombie.announce();
	std::cout << "\033[1;31m1stZombie Will destruct with return\033[0m" << std::endl;
	return;
}
