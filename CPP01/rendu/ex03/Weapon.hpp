/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:05:01 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 19:56:15 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include <iostream>

class Weapon
{
	private :
		std::string	_type;
	public :
		Weapon( std::string type);
		~Weapon( void );
		std::string getType( void ) const;
		void setType( std::string type );
};

#endif