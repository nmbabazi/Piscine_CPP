/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 11:34:00 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/13 11:49:10 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"


int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {

        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
	std::cout << "count:" << vlc->getCount() << std::endl;
	std::cout << "             push NULL" << std::endl;
	vlc->push(NULL);
	std::cout << "count:" << vlc->getCount() << std::endl;
	std::cout << "             push same" << std::endl;
	vlc->push(bob);
    std::cout << "count:" << vlc->getCount() << std::endl;
    std::cout << "             deep copy" << std::endl;
    ISpaceMarine* jack = new AssaultTerminator;
    ISquad* vlc2 = new Squad(*static_cast<Squad*>(vlc));
    std::cout << "vlc2 count:" << vlc2->getCount() << std::endl;
    std::cout << "count:" << vlc->getCount() << std::endl;
    vlc2->push(jack);
    std::cout << "vlc2 count:" << vlc2->getCount() << std::endl;
    std::cout << "count:" << vlc->getCount() << std::endl;
	delete vlc2;
    delete vlc;
    return 0;
}
