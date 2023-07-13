/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:54:50 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/11 20:17:24 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type("AAnimal")
{
	std::cout << "\033[1;32mAAnimal Default constructor called\033[0m" << std::endl;
}

AAnimal::AAnimal( AAnimal const & src )
{
	std::cout << "\033[1;35mAAnimal Copy constructor called\033[0m" << std::endl;
	*this = src;
}

AAnimal::~AAnimal( void )
{
	std::cout << "\033[1;31mAAnimal Destructor called\033[0m" << std::endl;
}

AAnimal & AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "\033[1;34mAAnimal Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "\033[1;33m??? ... AAnimal sound\033[0m" << std::endl;
}

std::string	AAnimal::getType( void ) const
{
	return (this->_type);
}
