/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 18:34:41 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 19:33:44 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << _name <<", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer & src )
{
	*this = src;
	return ;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name <<", " << _title << ", is dead. Consequences will never be the same!"
		<< std::endl;
}

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return *this;
}

std::string		Sorcerer::getName()const { return _name;}
std::string		Sorcerer::getTitle()const { return _title;}

void 			Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!"
		<< std::endl;
	return o;
}
