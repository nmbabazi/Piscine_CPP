/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:19:14 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 17:51:55 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name)
{

}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout << this->_name << " attacks with his " << _weaponB->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weaponB = &weapon;
}