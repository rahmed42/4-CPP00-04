/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:54:50 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/04 20:16:14 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointValue(0)
{
	std::cout << "\033[1;32mDefault constructor called\033[0m" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "\033[1;35mCopy constructor called\033[0m" << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	std::cout << "\033[1;31mDestructor called\033[0m" << std::endl;
}

Fixed::Fixed(int const n) : _fixedPointValue(n << _fracBits)
{
	std::cout << "\033[1;33mInt constructor called\033[0m" << std::endl;
}

Fixed::Fixed(float const n) : _fixedPointValue(roundf(n * (1 << _fracBits)))
{
	std::cout << "\033[1;33mFloat constructor called\033[0m" << std::endl;
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
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat( void ) const
{
	return (this->_fixedPointValue / (float)(1 << _fracBits));
}

int		Fixed::toInt( void ) const
{
	return (this->_fixedPointValue >> _fracBits);
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return (o);
}
