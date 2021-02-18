/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:58:11 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/17 15:22:30 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
    	std::cout << std::endl << std::endl;
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);

    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    std::cout << std::endl;
	me->recoverAP(); 
    std::cout << *me;
	me->recoverAP();
    std::cout << *me;
	
	std::cout << std::endl;
	
    me->equip(pf);
	b = new SuperMutant();
	std::cout << *me;
    std::cout << "Enemy points befor:" << b->getHP() << std::endl;
    std::cout << "Damage of weapon is " << pf->getDamage() << " and cost " << pf->getAPCost() << std::endl;
    me->attack(b);
    std::cout << "Enemy points After:" << b->getHP() << std::endl;
    std::cout << *me;
	
	std::cout << std::endl;
	
	me->attack(b);
    std::cout << *me;
	me->attack(b);
    std::cout << *me;
	me->attack(b);
    std::cout << *me; 
    me->attack(b); 
    std::cout << *me; 
    me->attack(b); 

	me->recoverAP();
    std::cout << *me; */
    
    delete me;
    delete pr;
    delete pf;

    return 0;
}
