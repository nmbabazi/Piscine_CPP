/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:53:07 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 14:40:52 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    return ;
}

Zombie::~Zombie()
{   
    std::cout << "<" << this->_name << " (" << this->_zombieType << ")" << "> ";
    std::cout  << "Diiiieeeedddddddd..." << std::endl;
}

void    Zombie::chooseName(std::string name)
{
    this->_name = name;
}

void    Zombie::chooseType(std::string type)
{
    this->_zombieType = type;
}

void   Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_zombieType << ")" << "> ";
    std::cout  << "Braiiiiiiinnnssss..." << std::endl;
}