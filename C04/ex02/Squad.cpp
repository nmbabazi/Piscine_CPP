/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:16:36 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/17 12:21:51 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): _unit(NULL)
{
}

Squad::Squad( const Squad & src )
{
	*this = src;
}

Squad::~Squad()
{
		_lstClear();
}

Squad &	Squad::operator=( Squad const & rhs )
{
	_lstClear();
	for (int i = 0; i < rhs.getCount(); i++)
		push(rhs.getUnit(i)->clone());
	return *this;
}

int Squad::getCount() const
{
	t_list *iterator = _unit;
	int len = 0;

	while (iterator)
	{
		len++;
		iterator = iterator->next;
	}
	return len;
}

ISpaceMarine* Squad::getUnit(int index) const
{
	t_list *iterator = _unit;

	while (iterator && index)
	{
		iterator = iterator->next;
		index--;
	}
	if (iterator)
		return iterator->spaceMarine;
	return NULL;
}

int Squad::push(ISpaceMarine* topush)
{
	t_list *iterator = _unit;
	int len = 1;
	
	if (topush == NULL)
		return getCount();
	if (iterator == NULL)
	{	
		_unit = new t_list();		
		_unit->spaceMarine = topush;
		_unit->next = NULL;
		return len;
	}
	while (iterator->next)
	{
		if (iterator->spaceMarine == topush)
			return getCount();
		iterator = iterator->next;
		len++;
	}
	if (iterator->spaceMarine == topush)
		return len;
	iterator->next = new t_list();		
	iterator->next->spaceMarine = topush;
	iterator->next->next = NULL;
	return len + 1;
}

void Squad::_lstClear()
{
	t_list *iterator = _unit;
	t_list *next;

	while (iterator)
	{
		next = iterator->next;
		delete iterator->spaceMarine;
		delete iterator;
		iterator = next;
	}
	_unit = NULL;
}