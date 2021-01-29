/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:19:14 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 19:05:20 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string  type):_Type(type)
{
    return ;
}

Weapon::~Weapon()
{
}

void        Weapon::setType(std::string type)
{
   _Type = type; 
}

std::string const   &Weapon::getType()
{
    return (_Type);
}