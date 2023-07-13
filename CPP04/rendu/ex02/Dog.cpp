/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:22:23 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/11 18:03:53 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "\033[1;32mDog Default constructor called\033[0m" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( Dog const & src )
{
	std::cout << "\033[1;35mDog Copy constructor called\033[0m" << std::endl;
	*this = src;
}

Dog::~Dog( void )
{
	std::cout << "\033[1;31mDogDestructor called\033[0m" << std::endl;
	delete this->_brain;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	std::cout << "\033[1;34mDog Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
	{
		delete this->_brain;
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "\033[1;33mOuaf Ouaf ! Grrrrr\033[0m" << std::endl;
}
