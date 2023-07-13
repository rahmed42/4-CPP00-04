/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/11 20:10:25 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	const Animal* meta[10];
	int i(0);

	while (i < 5)
		meta[i++] = new Cat();
	while (i < 10)
		meta[i++] = new Dog();

	for (i = 0; i < 10; i++)
	{
		std::cout << "\033[1;33mWe will delete a \033[0m" << meta[i]->getType()  << std::endl;
		delete meta[i];
	}
	// system ("leaks brain");
	return (0);
}
