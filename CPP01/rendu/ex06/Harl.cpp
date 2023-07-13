/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:54:50 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/01 23:24:04 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	std::cout << "\033[1;32mHarl created\033[0m" << std::endl;
}

Harl::~Harl( void )
{
	std::cout << "\033[1;31mHarl destroyed\033[0m" << std::endl;
}

void	Harl::complain( std::string level )
{
	int i(0);
	std::string	array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (level == array[i])
			break;
		i++;
	}
	switch (i)
	{
		case DEBUG :
			this->debug();
			break;
		case INFO :
			this->info();
			break;
		case WARNING :
			this->warning();
			break;
		case ERROR :
			this->error();
			break;
		default :
			std::cout << "\033[1;31mHarl: unknown level\033[0m" << std::endl;
			break;
	}
}

void	Harl::debug( void )
{
	std::cout << "\033[1;33mHarl: DEBUG\033[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "\033[1;33mHarl: INFO\033[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "\033[1;33mHarl: WARNING\033[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "\033[1;33mHarl: ERROR\033[0m" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
