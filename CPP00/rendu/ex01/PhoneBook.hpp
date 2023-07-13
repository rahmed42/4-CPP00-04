/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:05:01 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/27 15:41:28 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <cstring>
# include <cctype>
# include <cstdlib>
# include <iostream>
# include "Contact.hpp"

# define PIPE "\033[1;35m|\033[0m"

class PhoneBook
{
	public :
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void);

	private :
		int		_iContact;
		int		_index;
		Contact	_contacts[8];
		int		_isCorrectName(std::string str);
		int		_isCorrectNumber(std::string str);
		void	_fillSpaces(std::string str);
};

#endif