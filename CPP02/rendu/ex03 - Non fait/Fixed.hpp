/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:55:22 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/06 17:40:42 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <cmath>
# include <iostream>

class Fixed
{
	private :
		int						_fixedPointValue;
		static const int		_fracBits = 8;

	public :
		Fixed( void );
		Fixed( Fixed const & src );
		Fixed(int const n);
		Fixed(float const n);

		~Fixed( void );

		int						getRawBits( void ) const;
		void					setRawBits( int const raw );

		float					toFloat( void ) const;
		int						toInt( void ) const;

		Fixed &					operator=( Fixed const & rhs );

		/* Comparison operators */
		bool					operator>( Fixed const & rhs );
		bool					operator<( Fixed const & rhs );
		bool					operator>=( Fixed const & rhs );
		bool					operator<=( Fixed const & rhs );
		bool					operator==( Fixed const & rhs );
		bool					operator!=( Fixed const & rhs );

		/* Arithmetic */
		Fixed					operator+( Fixed const & rhs ) const;
		Fixed					operator-( Fixed const & rhs ) const;
		Fixed					operator*( Fixed const & rhs ) const;
		Fixed					operator/( Fixed const & rhs ) const;

		/* Increment and decrement */
		Fixed &					operator++( void ); // prefix ++rhs
		Fixed					operator++( int ); // postfix lhs++
		Fixed &					operator--( void ); // prefix --rhs
		Fixed					operator--( int ); // postfix lhs--

		/* Member functions */
		static Fixed &			min( Fixed & lhs, Fixed & rhs );
		static Fixed const &	min( Fixed const & lhs, Fixed const & rhs );
		static Fixed &			max( Fixed & lhs, Fixed & rhs );
		static Fixed const &	max( Fixed const & lhs, Fixed const & rhs );
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
