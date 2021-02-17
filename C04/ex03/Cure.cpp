/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:32:46 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/16 16:09:44 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure( const Cure & src ): AMateria("cure")
{
	*this =src;
}

Cure::~Cure(){}

Cure &				Cure::operator=( Cure const & rhs )
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
	return ;
}
