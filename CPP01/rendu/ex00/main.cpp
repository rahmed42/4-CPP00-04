/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 17:53:00 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	name;

	std::cout << "\033[1;33m->>>randomChump " << std::endl << "\033[1;32m@1stZombie : \033[0m" << std::endl;
	name = askName();
	randomChump(name);

	std::cout << "\033[1;33m->>>newZombie " << std::endl << "\033[1;32m@NewZombie : \033[0m" << std::endl;
	name = askName();
	Zombie	*zombie2;
	zombie2 = newZombie(name);
	zombie2->announce();

	std::cout << "\033[1;33mNewZombie Will destruct with Delete\033[0m" << std::endl;
	delete zombie2;

	return (0);
}
