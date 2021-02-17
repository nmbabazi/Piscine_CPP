/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:50:51 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/17 10:27:12 by nailambz         ###   ########.fr       */
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
		{
			std::cout << i << std::endl;
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	std::cout << "sortiii " << this->_name << std::endl;
}

Character &	Character::operator=( Character const & rhs )
{
	_name = rhs.getName();
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	for (int i = 0; i < 4 ; i++)
		if (rhs._inventory[i] != NULL)
		{
			_inventory[i] = rhs._inventory[i]->clone();
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