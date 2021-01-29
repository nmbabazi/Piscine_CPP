/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:26:52 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 11:53:08 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(int ac, char **av)
{
    ZombieEvent zombieEvent;

    if (ac == 2)
        delete zombieEvent.newZombie(av[1]);
    else 
        zombieEvent.randomChump();
    return (0);
}