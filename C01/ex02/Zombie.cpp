/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:53:07 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 14:45:14 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type):_name(name), _zombieType(type){
    this->announce();
    return ;
}

Zombie::~Zombie()
{
    std::cout << "<" << this->_name << " (" << this->_zombieType << ")" << "> ";
    std::cout  << "Diiiieeeedddddddd..." << std::endl;
}

void   Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_zombieType << ")" << "> ";
    std::cout  << "Braiiiiiiinnnssss..." << std::endl;
}