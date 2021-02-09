/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ClapTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:16:02 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 12:43:58 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " ClapTrap.hpp"

ClapTrap:: ClapTrap()
{
}

ClapTrap:: ClapTrap(std::string name):_name(name), _hitPoints(0), _maxHit(0),
								_energyPoints(0), _maxEnergy(0), _level(0),
								_meleeAttack(0), _rangeAttack(0), _armorDamage(0)
{
	std::cout << "Loading... " << _name << std::endl;
}

ClapTrap:: ClapTrap( const  ClapTrap & src )
{
	*this = src;
	return ;
}

ClapTrap::~ ClapTrap()
{
	std::cout << "Ending... " << _name << std::endl;
}


ClapTrap &				 ClapTrap::operator=(  ClapTrap const & rhs )
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


unsigned int	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attacks " << target << " at range, causing "
				<< _rangeAttack << " points of damage !" << std::endl;
	return (_rangeAttack);
}

unsigned int	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attacks " << target
		<< " in a melee attack, causing " << _meleeAttack << " points of damage !"
		<< std::endl;
	return (_meleeAttack);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return ;
	_hitPoints -= (amount - _armorDamage);
	if (_hitPoints < 1)
	{
		_hitPoints = 0;
	}
	std::cout << "FR4G-TP " << _name << ": has been attacked and has " << _hitPoints
		<< " hit points left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((_hitPoints + amount) > _maxHit)
		_hitPoints = _maxHit;
	else 
		_hitPoints += amount;
	if ((_energyPoints+ amount) > _maxEnergy)
		_energyPoints = _maxEnergy;
	else 
		_energyPoints += amount;
	std::cout << "FR4G-TP " << _name << ": has been repaired of " << amount
		<< " points, ready to fight again!" << std::endl;
}

std::string ClapTrap::getName(){ return _name;}
int ClapTrap::getHitPoints(){ return _hitPoints;}
unsigned int ClapTrap::getMaxHitPoints(){ return _maxHit;}
int ClapTrap::getEnergyPoints(){ return _energyPoints;}
unsigned int ClapTrap::getMaxEnergyPoints(){ return _maxEnergy;}
int ClapTrap::getLevel(){ return _level;}
int ClapTrap::getMeleeAttackDamage(){ return _meleeAttack;}
int ClapTrap::getRangedAttackDamage(){ return _rangeAttack;}
int ClapTrap::getArmorDamageReduction(){ return _armorDamage;}

void	ClapTrap::setEnergyPoint(unsigned int amount)
{
	if ((_energyPoints+ amount) > _maxEnergy)
		_energyPoints = _maxEnergy;
	else 
		_energyPoints += amount;
	std::cout << "FR4G-TP " << _name << ": has been repaired of " << amount
		<< " energy points, ready to fight again!" << std::endl;
}
