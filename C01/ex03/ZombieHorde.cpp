/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:47:33 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 12:03:20 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->_size = N;
    this->_horde = new Zombie[N];
    for (int i = 0 ; i < N; i++)
    {
        this->_horde[i].chooseName(this->chooseRandomly("name", i + 1));
        this->_horde[i].chooseType(this->chooseRandomly("type", i + 1));
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] _horde;
}

std::string  ZombieHorde::chooseRandomly(std::string from, int i)
{
    srand (time(NULL) + i);
    const char *type[] = {"Generic", "Walker", "Stalker", "Crawler", "Intelligent"};
	const char *name[] = {"Michonne", "Rick", "Glenn", "Negan", "Daryl", "Hershel", "Carl", "Judith", "Laury", "Eugene", "Sacha"};
    if (!from.compare("name"))
    {
        int index = rand() % 11 + 0;
        return (name[index]);
    }
    if (!from.compare("type"))
    {
        int index = rand() % 5 + 0;
        return (type[index]);
    }
    return (NULL);
}

void  ZombieHorde::announce()
{
    for (int i = 0 ; i < this->_size; i++)
        this->_horde[i].announce();
    return ;
}