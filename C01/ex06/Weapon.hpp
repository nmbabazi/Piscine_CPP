/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:17:57 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 19:05:07 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
    std::string _Type;
public:
    Weapon(std::string type);
    Weapon();
    ~Weapon();

    std::string const &getType();
    void        setType(std::string type);
};



#endif