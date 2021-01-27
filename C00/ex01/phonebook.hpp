/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:45:05 by nmbabazi          #+#    #+#             */
/*   Updated: 2021/01/27 18:38:02 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

#define MAX_CONTACT 8

class   Contact
{
private:
	std::string _fname;
	std::string _lname;
	std::string _nickname;
	std::string _login;
	std::string _address; 
	std::string _email; 
	std::string _phone;
	std::string _birthday; 
	std::string _meal;
	std::string _underwear;
	std::string _secret;

public:
	Contact();
	~Contact();
	
	std::string getField(std::string field);
	void        fillField(std::string field, std::string input);
	void        printContact(void);
};

class   Phonebook
{
private:
	int     _index;
	void    _printField(std::string field);
	
public:
	Phonebook();
	~Phonebook();
	
	void addcontact(void);
	void searchcontact(void);
	Contact contact[8];
	
};

#endif