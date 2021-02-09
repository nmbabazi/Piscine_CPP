/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:28:30 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 16:42:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main()
{
    FragTrap Lilith = FragTrap("lilith");
    FragTrap Brick = FragTrap("Brick");
    ScravTrap Serena = ScravTrap("Serena");
    ClapTrap Master = ClapTrap("Master");
    NinjaTrap Naruto = NinjaTrap("Naruto");
    SuperTrap Fusion = SuperTrap("Fusion");

    Lilith.takeDamage(Brick.meleeAttack("Lilith"));
    Lilith.takeDamage(Serena.meleeAttack("Lilith"));
    
    std::cout << "             Lilith is pissed and brought the HEAT!!!!!"
        << std::endl;
    
    for(int i = 3; i >= 0; i--)
        Brick.takeDamage(Lilith.vaulthunter_dot_exe("Brick"));
    Serena.challengeNewcomer(Lilith);
    Brick.takeDamage(Lilith.vaulthunter_dot_exe("Birck"));
    std::cout << "             Naruto is feadup with everyone"
        << std::endl;
    Naruto.ninjaShoebox(Master);
    Naruto.ninjaShoebox(Serena);
    Naruto.ninjaShoebox(Brick);
    Naruto.ninjaShoebox(Lilith);
    std::cout << "             Fusion wants to avange his friends Brick"
        << std::endl;
    Lilith.takeDamage(Fusion.vaulthunter_dot_exe("Lilith"));
    Fusion.ninjaShoebox(Naruto);
    return (0);
}