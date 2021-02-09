/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:23:58 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 12:41:33 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap(std::string name):ClapTrap(name)
{
	std::cout << "Building off SCR4V-TP " << name << std::endl;
	_hitPoints = 100;
	_maxHit = 100;
	_energyPoints = 50;
	_maxEnergy = 50;
	_level = 1;
	_meleeAttack= 20;
	_rangeAttack = 15;
	_armorDamage = 3;
}

ScravTrap::ScravTrap( const ScravTrap & src )
{
	*this = src;
	return ;
}

ScravTrap::~ScravTrap()
{
	std::cout << "Destruction off SCR4V-TP " << _name << std::endl;
}

ScravTrap &				ScravTrap::operator=( ScravTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_maxHit = rhs._maxHit;
		this->_energyPoints = rhs._energyPoints;
		this->_maxEnergy = rhs._maxEnergy;
		this->_level = rhs._level;
		this->_meleeAttack = rhs._meleeAttack;
		this->_rangeAttack = rhs._rangeAttack;
		this->_armorDamage = rhs._armorDamage;
	}
	return *this;
}

int	ScravTrap::challengeNewcomer(FragTrap & target)
{
	srand (time(NULL));
	char const *poolChallenges[] = {"sing a song", "arm wrestling",
		"tell a joke", "eat hot pepper"};
	unsigned int energy[] = {4,10,50,20};
	int index = rand() % 4;
	std::cout << "SCR4V-TP " << _name << ": is challenging " << target.getName() << " to "
		<< poolChallenges[index] << std::endl;
	std::cout << "FR4G-TP " << target.getName() << ": wins the challenge and is rewarded with "
		<< energy[index] << " energy points" << std::endl;
	target.setEnergyPoint(energy[index]);
	return (0);
}

