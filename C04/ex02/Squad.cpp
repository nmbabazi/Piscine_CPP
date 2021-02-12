/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:16:36 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/12 15:23:16 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): _count(0), _unit(NULL)
{
}

Squad::Squad( const Squad & src )
{
	this->operator=(src);
	
}

Squad::~Squad()
{
	if (_unit)
	{
		for (int i = 0; i < _count; i++)
			delete _unit[i];
		delete _unit;
	}
}

Squad &	Squad::operator=( Squad const & rhs )
{
	if ( this != &rhs )
	{
		if (_unit)
		{
			for (int i = 0; i < _count; i++)
				delete _unit[i];
			delete _unit;
			_unit = NULL;
		}
		for (int i = 0; i < rhs.getCount(); i++)
			this->push(rhs.getUnit(i));
		_count = rhs.getCount();
	}
	return *this;
}

int Squad::getCount() const{return _count;}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (index >= 0 && index < _count)
		return _unit[index];
	return NULL;
}

int Squad::push(ISpaceMarine* topush)
{
	if (!topush)
		return _count;
	for (int i = 0; i < _count; i++)
	{
		if (_unit[i] == topush)
			return _count;
	}
	ISpaceMarine **newUnit = new ISpaceMarine* [_count + 1];
	for (int i = 0; i < _count ; i++)
		newUnit[i] = _unit[i];
	newUnit[_count] = topush;
	delete[] _unit;
	_unit = newUnit;
	_count++;
	return _count;
}