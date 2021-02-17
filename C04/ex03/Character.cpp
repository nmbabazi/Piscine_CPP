/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:50:51 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/17 10:55:34 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string name): _name(name)
{
}

Character::Character( const Character & src )
{
	this->operator=(src);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
			_inventory[i] = NULL;
}

Character &	Character::operator=( Character const & rhs )
{
	_name = rhs.getName();
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
		{
			_inventory[i] = NULL;
		}
	for (int i = 0; i < 4 ; i++)
		if (rhs._inventory[i] != NULL)
		{
			_inventory[i] = rhs._inventory[i];
		}
	return *this;
}

std::string const & Character::getName() const{return _name;}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_inventory[idx]->use(target);
}