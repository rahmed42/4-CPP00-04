/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:22:23 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/11 18:44:33 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "\033[1;34mBrain Default constructor called\033[0m" << std::endl;
}

Brain::Brain( Brain const & src )
{
	std::cout << "\033[1;35mBrain Copy constructor called\033[0m" << std::endl;
	*this = src;
}

Brain::~Brain( void )
{
	std::cout << "\033[1;31mBrainDestructor called\033[0m" << std::endl;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	std::cout << "\033[1;34mBrain Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	return (*this);
}
