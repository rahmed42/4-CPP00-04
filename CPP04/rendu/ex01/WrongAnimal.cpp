/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:20:13 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/10 22:26:51 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << "\033[1;32mWrongAnimal Default constructor called\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "\033[1;35mWrongAnimal Copy constructor called\033[0m" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "\033[1;31mWrongAnimal Destructor called\033[0m" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "\033[1;34mWrongAnimal Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "\033[1;33m??? ... WrongAnimal sound\033[0m" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}
