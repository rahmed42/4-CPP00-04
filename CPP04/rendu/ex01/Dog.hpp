/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:55:22 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/11 18:34:52 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain* 		_brain;

	public :
		/* Canonical Member Functions */
		Dog( void );
		Dog( Dog const & src );
		~Dog( void );
		Dog &		operator=( Dog const & rhs );

		/* Member Functions */
		void		makeSound( void ) const;
};
