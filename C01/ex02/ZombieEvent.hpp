/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:59:27 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 11:47:16 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h> 
# include "Zombie.hpp"

class ZombieEvent
{
private:
    
public:
    ZombieEvent();
    ~ZombieEvent();

    std::string    chooseRandomly(std::string from);
    Zombie  *newZombie(std::string name);
    void randomChump();
};


#endif