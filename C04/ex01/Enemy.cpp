/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:59:13 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/10 11:35:17 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
}

Enemy::Enemy( const Enemy & src )
{
	*this = src;
	return ;
}

Enemy::~Enemy()
{
}

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	if ( this != &rhs )
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();

	}
	return *this;
}

std::string  const Enemy::getType()const{return _type;}
int Enemy::getHP()const{return _hp;}

void Enemy::takeDamage(int amount)
{
	if (amount < 0)
		return ;
	_hp -= amount;
	return ;
}