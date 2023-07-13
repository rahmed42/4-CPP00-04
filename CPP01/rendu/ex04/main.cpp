/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/01 21:57:59 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileContent.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		std::string filename, s1, s2;
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		FileContent fc;
		std::cout << "create new replaced : " << fc.replaceFileContent(filename, s1, s2) << std::endl;
	}
	else
		std::cout << "\033[1;31m Error : Wrong parameters\033[0m" << std::endl;
	return (0);
}
