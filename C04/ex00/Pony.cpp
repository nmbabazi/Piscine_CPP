/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:19:14 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/10 09:28:03 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
}

Pony::Pony(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Pony::Pony( const Pony & src )
{
	*this = src;
	return ;
}


Pony::~Pony()
{
	std::cout << "Bleuark..." << std::endl;
}

Pony &				Pony::operator=( Pony const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
	}
	return *this;
}

void			Pony::getPolymorphed() const
{
	std::cout << _name << " has been turned into a fish!" << std::endl;
}
