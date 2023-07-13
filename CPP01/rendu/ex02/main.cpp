/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 18:37:18 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Memory adress of string    : " << &str << std::endl;
	std::cout << "Memory adress of stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory adress of stringREF : " << &stringREF << std::endl;

	std::cout << "Value of string            : " << str << std::endl;
	std::cout << "Value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF : " << stringREF << std::endl;

	return (0);
}
