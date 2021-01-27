/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:25:06 by nmbabazi          #+#    #+#             */
/*   Updated: 2021/01/27 19:37:04 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "WELCOM !!" << std::endl;
	std::cout << "ADD your first contact" << std::endl;
	this->_index = 0;
	return ;
}

Phonebook::~Phonebook()
{
	std::cout << "Say bye to all your contacts" << std::endl;
	return ;
}

void    Phonebook::addcontact(void)
{
	std::string input;
	if (this->_index < MAX_CONTACT)
	{
		std::cout << "      first name : ";
		std::getline (std::cin,input);
		contact[_index].fillField("fname", input);
		std::cout << "      last name : ";
		std::getline (std::cin,input);
		contact[_index].fillField("lname", input);
		std::cout << "      nickname : ";
		std::getline (std::cin,input);
		contact[_index].fillField("nickname", input);
		std::cout << "      login : ";
		std::getline (std::cin,input);
		contact[_index].fillField("login", input);
		std::cout << "      postal address : ";
		std::getline (std::cin,input);
		contact[_index].fillField("address", input);
		std::cout << "      email : ";
		std::getline (std::cin,input);
		contact[_index].fillField("email", input);
		std::cout << "      phone number : ";
		std::getline (std::cin,input);
		contact[_index].fillField("phone", input);
		std::cout << "      birthday date : ";
		std::getline (std::cin,input);
		contact[_index].fillField("birthday", input);
		std::cout << "      favorite meal : ";
		std::getline (std::cin,input);
		contact[_index].fillField("meal", input);
		std::cout << "      underwear color : ";
		std::getline (std::cin,input);
		contact[_index].fillField("underwear", input);
		std::cout << "      darkest secret : ";
		std::getline (std::cin,input);
		contact[_index].fillField("secret", input);
		this->_index++;
		
	}
	else 
		std::cout << "Your phonebook is full" << std::endl;
	return ;
}

void    Phonebook::_printField(std::string field)
{
	if (field.length() > 10)
	{
		field.erase(9, (field.length() - 9));
		std::cout << field << ".";
	}
	else if (field.length() <= 10)
	{
		std::cout << std::setfill (' ') << std::setw (10);
  		std::cout << field;
	}
	std::cout << "|";
	return ;
}

void    Phonebook::searchcontact(void)
{
	std::string input;
	std::string::size_type sz;
	if (this->_index == 0)
	{
		std::cout << "Zero contact, please ADD a contact" << std::endl;
		return ;
	}
	_printField("index");
	_printField("first name");
	_printField("last name");
	_printField("nickname");
	std::cout << std::endl;
	for (int i = 0; i < this->_index; i++)
	{
		_printField(std::to_string(i + 1));
		_printField(contact[i].getField("fname"));
		_printField(contact[i].getField("lname"));
		_printField(contact[i].getField("nickname"));
		std::cout << std::endl;
	}
	std::cout << "      choose a contact(index): ";
	while (std::getline (std::cin,input))
	{
		if (!isdigit(input[0]) || std::stoi(input, &sz) > this->_index || std::stoi(input, &sz) < 1)
			std::cout << "      ERROR index: choose a contact(index): ";
		else
			break ;
	}
	int i_index = std::stoi(input, &sz);
	contact[i_index - 1].printContact();
	return ; 
}

