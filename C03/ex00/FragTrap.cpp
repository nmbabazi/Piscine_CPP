/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:51:49 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 16:27:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string name):_name(name), _hitPoints(100), _maxHit(100),
								_energyPoints(100), _maxEnergy(100), _level(1),
								_meleeAttack(30), _rangeAttack(20), _armorDamage(5)
{
	std::cout << "Building off FR4G-TP " << _name << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	*this = src;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Destruction off FR4G-TP " << _name << " but he always come back" 
		<< std::endl;
}

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

unsigned int	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attacks " << target << " at range, causing "
				<< _rangeAttack << " points of damage !" << std::endl;
	return (_rangeAttack);
}

unsigned int	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attacks " << target
		<< " in a melee attack, causing " << _meleeAttack << " points of damage !"
		<< std::endl;
	return (_meleeAttack);
}

void	FragTrap::sniperAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attacks " << target << " by sniper, causing"
			<< " 15" << " points of damage !" << std::endl;
}

void	FragTrap::rocketAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attacks " << target << " with a rocket, causing"
			<< " 10" << " points of damage !" << std::endl;
}

void	FragTrap::laserAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attacks " << target << " with a laser, causing"
			<< " 70" << " points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return ;
	_hitPoints -= (amount - _armorDamage);
	if (_hitPoints < 1)
		_hitPoints = 0;
	std::cout << "FR4G-TP " << _name << ": has been attacked and has " << _hitPoints
		<< " hit points left" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
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

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_energyPoints < 25)
	{
		std::cout << "FR4G-TP " << _name << " FAILED to attack! not enough energy, please get repaired !"
			<< std::endl;
		return (0);
	}
	_energyPoints -= 25;
	int index = rand() % 5;
    switch (index)
    {
        case 0:
            this->rangedAttack(target);
            return (_rangeAttack);
        case 1:
            this->meleeAttack(target);
            return (_meleeAttack);
		case 2:
            this->sniperAttack(target);
            return (15);
        case 3:
            this->laserAttack(target);
            return (70);
        case 4:
            this->rocketAttack(target);
            return (10);
    }
	return (0);
}

std::string FragTrap::getName(){ return _name;}
int FragTrap::getHitPoints(){ return _hitPoints;}
unsigned int FragTrap::getMaxHitPoints(){ return _maxHit;}
int FragTrap::getEnergyPoints(){ return _energyPoints;}
unsigned int FragTrap::getMaxEnergyPoints(){ return _maxEnergy;}
int FragTrap::getLevel(){ return _level;}
int FragTrap::getMeleeAttackDamage(){ return _meleeAttack;}
int FragTrap::getRangedAttackDamage(){ return _rangeAttack;}
int FragTrap::getArmorDamageReduction(){ return _armorDamage;}

