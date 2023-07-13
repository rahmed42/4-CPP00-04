/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/24 22:24:54 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>

int	main(void)
{
	PhoneBook	repertoire;
	std::string	cmd;

	while (strcmp(cmd.c_str(), "EXIT"))
	{
		std::cout << "\033[1;33mEnter CMD[ADD, SEARCH, EXIT]> \033[0m";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			repertoire.add();
		else if (cmd == "SEARCH")
			repertoire.search();
		else if (cmd != "EXIT")
			std::cout << "\033[1;35mUnknown command\033[0m" << std::endl;
	}
	return (0);
}
