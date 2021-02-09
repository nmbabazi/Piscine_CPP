/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:28:30 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/08 16:21:09 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap Lilith = FragTrap("lilith");
    FragTrap Brick = FragTrap("Brick");

    Lilith.takeDamage(Brick.meleeAttack("Lilith"));
    std::cout << "             Lilith is pissed and brought the HEAT!!!!!" << std::endl;
    
    for(int i = 3; i >= 0; i--)
        Brick.takeDamage(Lilith.vaulthunter_dot_exe("Brick"));
    Lilith.beRepaired(40);
    Brick.takeDamage(Lilith.vaulthunter_dot_exe("Birck"));
    return (0);
}