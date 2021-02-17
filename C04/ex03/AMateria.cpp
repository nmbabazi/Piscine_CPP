/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:27:23 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/16 15:58:50 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const &type): _xp(0), _type(type)
{
}

AMateria::AMateria( const AMateria & src )
{
	*this =src;
}

AMateria::~AMateria()
{
}

AMateria &	AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
		this->_xp = rhs.getXP();
	return *this;
}

std::string const & AMateria::getType() const {return _type;}

unsigned int AMateria::getXP() const {return _xp;}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
	return ;
}
