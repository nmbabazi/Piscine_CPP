/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:47:05 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 14:34:54 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h> 
# include "Zombie.hpp"

class   ZombieHorde
{
private:
        Zombie *_horde;
        int     _size;

public:
    ZombieHorde(int N);
    ~ZombieHorde();
    std::string    chooseRandomly(std::string from, int i);
    void    announce();
};

#endif