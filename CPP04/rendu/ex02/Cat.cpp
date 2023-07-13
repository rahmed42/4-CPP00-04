/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:22:23 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/11 18:04:13 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "\033[1;32mCat Default constructor called\033[0m" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( Cat const & src )
{
	std::cout << "\033[1;35mCat Copy constructor called\033[0m" << std::endl;
	*this = src;
}

Cat::~Cat( void )
{
	std::cout << "\033[1;31mCatDestructor called\033[0m" << std::endl;
	delete this->_brain;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	std::cout << "\033[1;34mCat Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
	{
		delete this->_brain;
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "\033[1;33mMiAAaaooooWWWww !\033[0m" << std::endl;
}
