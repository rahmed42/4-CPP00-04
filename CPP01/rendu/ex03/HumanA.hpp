/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:52:01 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 19:52:14 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_HPP
# define HUMAN_A_CLASS_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private :
		std::string	_name;
		Weapon&		_weapon;
	public :
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void	attack(void);
};

#endif