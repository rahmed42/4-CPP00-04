/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 22:18:20 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/10 22:18:30 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		/* Canonical Member Functions */
		WrongCat( void );
		WrongCat( WrongCat const & src );
		~WrongCat( void );
		WrongCat &		operator=( WrongCat const & rhs );

		/* Member Functions */
		void		makeSound( void ) const;
};
