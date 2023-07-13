/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:55:22 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/11 18:34:44 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Animal
{
	protected :
		std::string _type;

	public :
		/* Canonical Member Functions */
		Animal( void );
		Animal( Animal const & src );
		virtual ~Animal( void );
		Animal &		operator=( Animal const & rhs );

		/* Member Functions */
		virtual void	makeSound( void ) const;

		/* Getters and Setters */
		std::string		getType( void ) const;
};
