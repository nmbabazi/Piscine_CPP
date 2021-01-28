/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:29:34 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/28 16:27:35 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheStack(std::string name, std::string breed)
{
    Pony    pony = Pony(name, breed);
    pony.ponyJump();
    return ;
}

void    ponyOnTheHeap(std::string name, std::string breed)
{
    Pony*    pony = new Pony(name, breed);
    pony->ponyJump();
    delete pony;
    return ;
}

int main()
{
    std::cout << "------ PONY ON THE STACK ------" << std::endl;
    ponyOnTheStack("Jack", "Pur-sang");
    std::cout << "------ PONY ON THE HEAP ------" << std::endl;
    ponyOnTheHeap("Pégase", "Winged Horse");
}
