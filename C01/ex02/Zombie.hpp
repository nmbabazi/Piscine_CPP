/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:50:55 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 11:33:58 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
        std::string _name;
        std::string _zombieType;
public:
    Zombie(std::string name, std::string type);
    ~Zombie();
    void    announce();
};

#endif