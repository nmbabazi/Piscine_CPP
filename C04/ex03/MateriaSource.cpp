/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:25:23 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/16 15:32:08 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _sources()
{
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_sources[i] != NULL)
			delete _sources[i];
}

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0; i < 4; i++)
		if (rhs._sources[i] != NULL)
			_sources[i] = rhs._sources[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria* toLearn)
{
	for (int i = 0; i < 4; i++)
		if (_sources[i] == NULL)
		{
			_sources[i] = toLearn;
			break;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (_sources[i]->getType() == type)
			return _sources[i]->clone();
	return NULL;
	
}