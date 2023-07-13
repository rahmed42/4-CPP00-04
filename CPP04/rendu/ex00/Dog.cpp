/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:22:23 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/10 22:10:09 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "\033[1;32mDog Default constructor called\033[0m" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( Dog const & src )
{
	std::cout << "\033[1;35mDog Copy constructor called\033[0m" << std::endl;
	*this = src;
}

Dog::~Dog( void )
{
	std::cout << "\033[1;31mDogDestructor called\033[0m" << std::endl;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "\033[1;34mDog Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "\033[1;33mOuaf Ouaf ! Grrrrr\033[0m" << std::endl;
}
