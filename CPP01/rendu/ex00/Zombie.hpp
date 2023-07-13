/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:05:01 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/29 17:48:38 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>

class Zombie
{
	private :
		std::string	_name;
	public :
		Zombie( void );
		~Zombie( void );
		void announce( void ) const;
		void setName( std::string name );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
std::string askName( void );

#endif