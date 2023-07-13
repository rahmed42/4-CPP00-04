/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/10 22:27:42 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " Created and is an Animal" << std::endl;
	j->makeSound(); //will output the Dog sound!

	std::cout << i->getType() << " Created and is an Animal" << std::endl;
	i->makeSound(); //will output the cat sound!

	std::cout << meta->getType() << " Created and is an Animal" << std::endl;
	meta->makeSound(); //will output the animal sound!

	delete i;
	delete j;
	delete meta;

	std::cout << std::endl << "\033[1;36mNew tests with Wrong Animal\033[0m" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();

	std::cout << wi->getType() << " Created and is a WrongAnimal" << std::endl;
	wi->makeSound(); //will output the animal sound!

	std::cout << wmeta->getType() << " Created and is a WrongAnimal" << std::endl;
	wmeta->makeSound(); //will output the animal sound!

	delete wi;
	delete wmeta;

	return (0);
}
