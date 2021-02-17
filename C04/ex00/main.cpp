/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:24:54 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/17 11:19:27 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Pony.hpp"
#include <fstream>

int main()
{
    std::cout << std::endl << std::endl;
    std::ofstream output("presentation");
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Victim *pegase = new Pony("Pegase");
    std::cout << robert << jim << joe << *pegase;
    robert.polymorph(jim);
    robert.polymorph(*pegase);
    robert.polymorph(joe);
    output << robert << jim << joe << *pegase;
    delete pegase;
    return 0;
}