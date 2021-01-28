
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:25:06 by nmbabazi          #+#    #+#             */
/*   Updated: 2021/01/27 11:35:53 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(){}

Contact::~Contact(){}

std::string Contact::getField(std::string field)
{
		if (!field.compare("fname"))
				return (this->_fname);
		if (!field.compare("lname"))
				return (this->_lname);
		if (!field.compare("nickname"))
				return (this->_nickname);
		if (!field.compare("login"))
				return (this->_login);
		if (!field.compare("address"))
				return (this->_address);
		if (!field.compare("email"))
				return (this->_email);
		if (!field.compare("phone"))
				return (this->_phone);
		if (!field.compare("birthday"))
				return (this->_birthday);
		if (!field.compare("meal"))
				return (this->_meal);
    if (!field.compare("underwear"))
        return (this->_underwear);
		if (!field.compare("secret"))
				return (this->_secret);
		return (NULL);
}

void Contact::fillField(std::string field, std::string input)
{
	if (!field.compare("fname"))
		this->_fname = input;
	if (!field.compare("lname"))
		this->_lname = input;
	if (!field.compare("nickname"))
		this->_nickname = input;
	if (!field.compare("login"))
		this->_login = input;
	if (!field.compare("address"))
		this->_address = input;
	if (!field.compare("email"))
		this->_email = input;
	if (!field.compare("phone"))
		this->_phone = input;
	if (!field.compare("birthday"))
		this->_birthday = input;
	if (!field.compare("meal"))
		this->_meal = input;
	if (!field.compare("underwear"))
		this->_underwear = input;
	if (!field.compare("secret"))
		this->_secret = input;
}

void    Contact::printContact()
{
		std::cout << "       " << "first name: "<< this->_fname << std::endl;
		std::cout << "       " << "last name: " << this->_lname << std::endl;
		std::cout << "       " << "nickname: " << this->_nickname << std::endl;
		std::cout << "       " << "login: " << this->_login << std::endl;
		std::cout << "       " << "postal address: " << this->_address << std::endl;
		std::cout << "       " << "email address: " << this->_email << std::endl;
		std::cout << "       " << "phone number: " << this->_phone << std::endl;
		std::cout << "       " << "birthday date: " << this->_birthday << std::endl;
		std::cout << "       " << "favorite meal: " << this->_meal << std::endl;
		std::cout << "       " << "underwear color: " << this->_underwear << std::endl;
		std::cout << "       " << "darkest secret: " << this->_secret << std::endl;
}