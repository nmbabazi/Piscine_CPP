/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:07:57 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/28 16:27:57 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string breed): _name(name), _breed(breed)
{
    std::cout << this->_name << " THE " << this->_breed << " HAS BEEN CREATED" << std::endl;
}

Pony::~Pony(void)
{
    std::cout << this->_name << " THE " << this->_breed << " HAS BEEN DELETED" << std::endl;
}

void    Pony::ponyJump(void)
{
    std::cout << "ready! set! jump! ";
    std::cout << std::setfill (' ') << std::setw (0);
  	std::cout << ".";
    for (int i = 1; i < 5; i++)
    {
        std::cout << "                 " << std::setfill (' ') << std::setw (i);
  		std::cout << ".";
    }
    std::cout << std::endl;
    return ;
    
}