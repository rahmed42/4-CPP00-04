/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:54:50 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/03 15:07:46 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointValue(0)
{
	std::cout << "\033[1;32mDefault constructor called\033[0m" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "\033[1;31mDestructor called\033[0m" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "\033[1;33mCopy constructor called\033[0m" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{
	std::cout << "\033[1;34mCopy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "\033[1;35mgetRawBits member function called\033[0m" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "\033[1;36msetRawBits member function called\033[0m" << std::endl;
	this->_fixedPointValue = raw;
}
