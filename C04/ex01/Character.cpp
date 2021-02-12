/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:59:13 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/10 15:46:27 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const & name): _name(name), _ap(40)
{
}

Character::Character( const Character & src )
{
	*this = src;
	return ;
}

Character::~Character()
{
}

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_ap = rhs.getAP();
		this->_currentWeapon = rhs.getWeapon();
	}
	return *this;
}

std::string  const Character::getName()const{return _name;}
int Character::getAP()const{return _ap;}
AWeapon *Character::getWeapon()const{return _currentWeapon;}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
	return ;
}

void Character::equip(AWeapon* weapon)
{
	if (_ap > 0)
		_currentWeapon = weapon;
	return ;
}

void Character::attack(Enemy* enemy)
{
	if (_ap < _currentWeapon->getAPCost() || !_currentWeapon)
		return;
	_ap -= _currentWeapon->getAPCost();
	std::cout << _name <<" attacks " << enemy->getType() << " with a "
		<< _currentWeapon->getName() << std::endl;
	_currentWeapon->attack();
	enemy->takeDamage(_currentWeapon->getDamage());
	if (enemy->getHP() < 0)
		enemy->~Enemy();
	return ;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	if (!i.getWeapon())
		o <<  i.getName() << " has " << i.getAP() << " AP and is unarmed"
			<< std::endl;
	else
		o <<  i.getName() << " has " << i.getAP() << " AP and wields a "
			<< i.getWeapon()->getName() << std::endl;
	return o;
}