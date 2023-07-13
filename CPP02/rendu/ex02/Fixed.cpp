/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:54:50 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/05 19:57:28 by rahmed           ###   ########.fr       */
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

Fixed & Fixed::operator=( Fixed const & rhs )
{
	std::cout << "\033[1;34mCopy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(int const n) : _fixedPointValue(n << _fracBits)
{
	std::cout << "\033[1;33mInt constructor called\033[0m" << std::endl;
}

Fixed::Fixed(float const n) : _fixedPointValue(roundf(n * (1 << _fracBits)))
{
	std::cout << "\033[1;33mFloat constructor called\033[0m" << std::endl;
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

bool	Fixed::operator>( Fixed const & rhs )
{
	return (this->_fixedPointValue > rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const & rhs )
{
	return (this->_fixedPointValue < rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const & rhs )
{
	return (this->_fixedPointValue >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const & rhs )
{
	return (this->_fixedPointValue <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs )
{
	return (this->_fixedPointValue == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs )
{
	return (this->_fixedPointValue != rhs.getRawBits());
}

Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	Fixed	result;
	result._fixedPointValue = this->_fixedPointValue + rhs.getRawBits();
	return (result);
}

Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	Fixed	result;
	result._fixedPointValue = this->_fixedPointValue - rhs.getRawBits();
	return (result);
}

Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	Fixed	result;
	int		nbShift = this->_fixedPointValue * rhs.getRawBits();
	result._fixedPointValue = nbShift >> _fracBits;
	return (result);
}

Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	Fixed	result;
	int		nbShift = this->_fixedPointValue / rhs.getRawBits();
	result._fixedPointValue = nbShift << _fracBits;
	return (result);
}

Fixed	& Fixed::operator++( void )
{
	std::cout << "\033[1;35mPre-increment operator called\033[0m" << std::endl;
	this->_fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	std::cout << "\033[1;35mPost-increment operator called\033[0m" << std::endl;
	Fixed ret;
	ret.setRawBits(this->_fixedPointValue);
	this->_fixedPointValue++;
	return (ret);
}

Fixed	& Fixed::operator--( void )
{
	std::cout << "\033[1;35mPre-Decrement operator called\033[0m" << std::endl;
	this->_fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	std::cout << "\033[1;35mPost-Decrement operator called\033[0m" << std::endl;
	Fixed ret;
	ret.setRawBits(this->_fixedPointValue);
	this->_fixedPointValue--;
	return (ret);
}

Fixed &	Fixed::min( Fixed & lhs, Fixed & rhs )
{
	std::cout << "\033[1;36mMin called\033[0m" << std::endl;
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed const &	Fixed::min( Fixed const & lhs, Fixed const & rhs )
{
	std::cout << "\033[1;36mMin const called\033[0m" << std::endl;
	if ((Fixed) lhs < (Fixed) rhs)
		return (lhs);
	return (rhs);
}

Fixed &	Fixed::max( Fixed & lhs, Fixed & rhs )
{
	std::cout << "\033[1;36mMax called\033[0m" << std::endl;
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed const &	Fixed::max( Fixed const & lhs, Fixed const & rhs )
{
	std::cout << "\033[1;36mMax const called\033[0m" << std::endl;
	if ((Fixed) lhs > (Fixed) rhs)
		return (lhs);
	return (rhs);
}
