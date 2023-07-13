/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/27 16:13:32 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "\033[1;33m~~~ LAUNCH PhoneBook ~~~\033[0m" << std::endl;
	this->_iContact = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\033[1;31mPhoneBook Exited\033[0m" << std::endl;
}

void	PhoneBook::add(void)
{
	if (this->_iContact >= 8)
		std::cout << "\033[1;31mPhoneBook is full, older contact " << this->_index << " will be overwritten\033[0m" << std::endl;
	std::cout << "\033[1;32mADD New contact\033[0m" << std::endl;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	do
		std::cout << "\033[1;34mEnter first name> \033[0m";
	while (std::getline(std::cin, firstName) and (firstName.empty() or not _isCorrectName(firstName)));
	do
	std::cout << "\033[1;34mEnter last name> \033[0m";
	while (std::getline(std::cin, lastName) and (lastName.empty() or not _isCorrectName(lastName)));
	do
		std::cout << "\033[1;34mEnter nickName> \033[0m";
	while (std::getline(std::cin, nickName) and (nickName.empty() or not _isCorrectName(nickName)));
	do
		std::cout << "\033[1;34mEnter phone number> \033[0m";
	while (std::getline(std::cin, phoneNumber) and (phoneNumber.empty() or not _isCorrectNumber(phoneNumber)));
	do
		std::cout << "\033[1;34mEnter darkest secret> \033[0m";
	while (std::getline(std::cin, darkestSecret) and (darkestSecret.empty() or not _isCorrectName(darkestSecret)));
	this->_contacts[this->_index] = Contact(firstName, lastName, nickName, \
	phoneNumber, darkestSecret);
	std::cout << "\033[1;35mContact " << this->_index << " added\033[0m" << std::endl;
	this->_iContact++;
	this->_index = this->_iContact % 8;
}

void	PhoneBook::search(void)
{
	int			i = 0;
	std::string	entry;

	std::cout << "\033[1;35mLIST OF CONTACTS :\033[0m" << std::endl;
	std::cout << "     INDEX" << PIPE << "FIRST NAME" << PIPE << " LAST NAME" << PIPE << "  NICKNAME" << PIPE << std::endl;
	while (i < this->_iContact && i < 8)
	{
		std::cout << "         " << i << PIPE;
		this->_fillSpaces(_contacts[i].getFirstName());
		this->_fillSpaces(_contacts[i].getLastName());
		this->_fillSpaces(_contacts[i].getNickName());
		std::cout << std::endl;
		i++;
	}
	if (this->_iContact)
	{
		std::cout << "\033[1;35mCONTACT TO SHOW :\033[0m" << std::endl;
		std::cout << "\033[1;34mEnter contact number> \033[0m";
		while (std::getline(std::cin, entry))
		{
			if (not entry.empty())
			{
				i = atoi(entry.c_str());
				if (i >= 0 and i < this->_iContact and i < 8)
					break;
			}
			std::cout << "\033[1;34mEnter contact number> \033[0m";
		}
		std::cout << "\033[1;35mCONTACT " << i << " :\033[0m" << std::endl;
		std::cout << "\033[1;32m* firstName : \033[0m"<< this->_contacts[i].getFirstName() << std::endl;
		std::cout << "\033[1;32m* lastName : \033[0m"<< this->_contacts[i].getLastName() << std::endl;
		std::cout << "\033[1;32m* nickName : \033[0m"<< this->_contacts[i].getNickName() << std::endl;
		std::cout << "\033[1;32m* phoneNumber : \033[0m"<< this->_contacts[i].getPhoneNumber() << std::endl;
		std::cout << "\033[1;32m* darkestSecret : \033[0m"<< this->_contacts[i].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "\033[1;31mNo contact in PhoneBook\033[0m" << std::endl;
}

int	PhoneBook::_isCorrectName(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || \
		((str[i] >= 'a') && (str[i] <= 'z')) || \
		(str[i] == ' ') || (str[i] <= '-') || (str[i] <= '\''))
			i++;
		else
			return (0);
	}
	return (1);
}

int	PhoneBook::_isCorrectNumber(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= '0') && (str[i] <= '9')) || \
		(str[i] == ' ') || (str[i] == '.') || (str[i] == '+'))
			i++;
		else
			return (0);
	}
	return (1);
}

void	PhoneBook::_fillSpaces(std::string str)
{
	int	i;
	int len;

	len = str.length();
	i = len;
	if (i > 10)
		str[9] = '.';
	while (i++ < 10)
		std::cout << " ";
	i = 0;
	while (len and str[i] and i < 10)
	{
		std::cout << str[i];
		i++;
	}
	std::cout << PIPE;
}
