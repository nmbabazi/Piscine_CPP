/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:00:43 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 19:34:18 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(){}

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!"
		<< std::endl;
}

Victim::Victim( const Victim & src )
{
	*this = src;
	return ;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!"
		<< std::endl;
}

Victim &				Victim::operator=( Victim const & rhs )
{
	if ( this != &rhs )
		this->_name = rhs._name;
	return *this;
}

std::string		Victim::getName()const { return _name;}

void			Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!"
		<< std::endl;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	o << "I'm " << i.getName() << " and I like otters!" << std::endl;
	return o;
}