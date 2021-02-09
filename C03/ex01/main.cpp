/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:28:30 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 11:48:11 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

int main()
{
    FragTrap Lilith = FragTrap("lilith");
    FragTrap Brick = FragTrap("Brick");
    ScravTrap Serena = ScravTrap("Serena");

    Lilith.takeDamage(Brick.meleeAttack("Lilith"));
    Lilith.takeDamage(Serena.meleeAttack("Lilith"));
    
    std::cout << "             Lilith is pissed and brought the HEAT!!!!!"
        << std::endl;
    
    for(int i = 3; i >= 0; i--)
        Brick.takeDamage(Lilith.vaulthunter_dot_exe("Brick"));
    Serena.challengeNewcomer(Lilith);
    Brick.takeDamage(Lilith.vaulthunter_dot_exe("Birck"));
    
    return (0);
}