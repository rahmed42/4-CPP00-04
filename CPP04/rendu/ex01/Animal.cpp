/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:54:50 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/10 22:26:59 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal")
{
	std::cout << "\033[1;32mAnimal Default constructor called\033[0m" << std::endl;
}

Animal::Animal( Animal const & src )
{
	std::cout << "\033[1;35mAnimal Copy constructor called\033[0m" << std::endl;
	*this = src;
}

Animal::~Animal( void )
{
	std::cout << "\033[1;31mAnimal Destructor called\033[0m" << std::endl;
}

Animal & Animal::operator=( Animal const & rhs )
{
	std::cout << "\033[1;34mAnimal Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << "\033[1;33m??? ... Animal sound\033[0m" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}
