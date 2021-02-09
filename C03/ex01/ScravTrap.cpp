/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:23:58 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 11:47:50 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap()
{
}

ScravTrap::ScravTrap(std::string name):_name(name), _hitPoints(100), _maxHit(100),
								_energyPoints(50), _maxEnergy(50), _level(1),
								_meleeAttack(20), _rangeAttack(15), _armorDamage(3)
{
	std::cout << "Building off SCR4V-TP " << _name << std::endl;
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

unsigned int	ScravTrap::rangedAttack(std::string const & target)
{
	std::cout << "SCR4V-TP " << _name << ": slam the door on " << target
		<< " at range, causing " << _rangeAttack << " points of damage !" << std::endl;
	return (_rangeAttack);
}

unsigned int	ScravTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCR4V-TP " << _name << ": slam the door on " << target
		<< " nose, causing " << _meleeAttack << " points of damage !" << std::endl;
	return (_meleeAttack);
}

void	ScravTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return ;
	_hitPoints -= (amount - _armorDamage);
	if (_hitPoints < 1)
	{
		_hitPoints = 0;
		std::cout << "SCR4V-TP " << _name << ": has been attacked and has " << _hitPoints
			<< " hit points left" << std::endl;
		return ;
	}
	std::cout << "SCR4V-TP " << _name << ": has been attacked and has " << _hitPoints
		<< " hit points left" << std::endl;
}

void	ScravTrap::beRepaired(unsigned int amount)
{
	if ((_hitPoints + amount) > _maxHit)
		_hitPoints = _maxHit;
	else 
		_hitPoints += amount;
	if ((_energyPoints+ amount) > _maxEnergy)
		_energyPoints = _maxEnergy;
	else 
		_energyPoints += amount;
	std::cout << "SCR4V-TP " << _name << ": has been repaired of " << amount
		<< " points, ready to open doors!" << std::endl;
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

