/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:00:07 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 11:57:07 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

std::string  ZombieEvent::chooseRandomly(std::string from)
{
    srand (time(NULL));
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

void    ZombieEvent::randomChump()
{
    Zombie zombie = Zombie(this->chooseRandomly("name"), this->chooseRandomly("type"));
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    Zombie  *newzombie = new Zombie(name, this->chooseRandomly("type"));
    return (newzombie);
}
