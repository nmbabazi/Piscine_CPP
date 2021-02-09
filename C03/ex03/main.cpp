/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:28:30 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 15:08:05 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int main()
{
    FragTrap Lilith = FragTrap("lilith");
    FragTrap Brick = FragTrap("Brick");
    ScravTrap Serena = ScravTrap("Serena");
    ClapTrap Master = ClapTrap("Master");
    NinjaTrap Naruto = NinjaTrap("Naruto");

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
    return (0);
}