/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:17:57 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 19:09:58 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
    Weapon   *_weaponB;
    std::string _name;
public:
    HumanB(std::string name);
    ~HumanB();

    void    attack();
    void    setWeapon(Weapon &weapon);
};

#endif