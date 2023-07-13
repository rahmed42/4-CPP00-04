/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:55:22 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/03 14:57:35 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
	private :
		int					_fixedPointValue;
		static const int	_fracBits = 8;

	public :
		Fixed( void );
		Fixed( Fixed const & src );
		~Fixed( void );
		Fixed &		operator=( Fixed const & rhs );
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
};

#endif