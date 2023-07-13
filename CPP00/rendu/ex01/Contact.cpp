/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:39:55 by rahmed            #+#    #+#             */
/*   Updated: 2022/05/27 15:40:30 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

Contact::Contact(std::string _firstName, std::string _lastName, \
std::string _nickName, std::string _phoneNumber, std::string _darkestSecret)
{
	this->_firstName = _firstName;
	this->_lastName = _lastName;
	this->_nickName = _nickName;
	this->_phoneNumber = _phoneNumber;
	this->_darkestSecret = _darkestSecret;
}

std::string Contact::getFirstName()
{
	return (this->_firstName);
}

std::string Contact::getLastName()
{
	return (this->_lastName);
}

std::string Contact::getNickName()
{
	return (this->_nickName);
}

std::string Contact::getPhoneNumber()
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (this->_darkestSecret);
}
