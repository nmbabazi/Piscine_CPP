/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:59:13 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/10 15:45:36 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): _name(name),
												_apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon( const AWeapon & src )
{
	*this = src;
	return ;
}

AWeapon::~AWeapon()
{
}

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_damage = rhs.getDamage();
		this->_apcost = rhs.getAPCost();
	}
	return *this;
}

std::string  const AWeapon::getName()const{return _name;}
int AWeapon::getDamage()const{return _damage;}
int AWeapon::getAPCost()const{return _apcost;}

