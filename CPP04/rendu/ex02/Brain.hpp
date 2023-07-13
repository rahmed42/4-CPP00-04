/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:55:22 by rahmed            #+#    #+#             */
/*   Updated: 2022/06/11 20:18:42 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AAnimal.hpp"

class Brain
{
	private :
		std::string _ideas[100];

	public :
		/* Canonical Member Functions */
		Brain( void );
		Brain( Brain const & src );
		~Brain( void );
		Brain &		operator=( Brain const & rhs );

		/* Member Functions */
};
