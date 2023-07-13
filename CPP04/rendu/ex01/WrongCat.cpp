/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:17:25 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/10 22:17:30 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "\033[1;32mWrongCat Default constructor called\033[0m" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const & src )
{
	std::cout << "\033[1;35mWrongCat Copy constructor called\033[0m" << std::endl;
	*this = src;
}

WrongCat::~WrongCat( void )
{
	std::cout << "\033[1;31mWrongCatDestructor called\033[0m" << std::endl;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "\033[1;34mWrongCat Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "\033[1;33m Wrong ! MiAAaaooooWWWww !\033[0m" << std::endl;
}
