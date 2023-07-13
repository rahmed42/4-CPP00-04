/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:55:22 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/11 20:25:46 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class AAnimal
{
	protected :
		std::string _type;

	public :
		/* Canonical Member Functions */
		AAnimal( void );
		AAnimal( AAnimal const & src );
		virtual ~AAnimal( void );
		AAnimal &		operator=( AAnimal const & rhs );

		/* Member Functions */
		virtual void	makeSound( void ) const = 0;

		/* Getters and Setters */
		std::string		getType( void ) const;
};
