/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:34:03 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/17 10:29:10 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
	std::cout << "      10xp incrementatoion:" << std::endl;
	std::cout << "type:" << tmp->getType() << " | actual xp:" << tmp->getXP() << std::endl;
	me->use(1, *bob);
	me->use(1, *bob);
	std::cout << "type:" << tmp->getType() << " | actual xp:" << tmp->getXP() << std::endl;
	std::cout << "     DeepCopy " << std::endl;
	ICharacter *boby = new Character(*static_cast<Character*>(me));
    std::cout << "test du materia 2" << std::endl;
    boby->use(1, *bob);
    me->use(1, *bob);
    std::cout << "test du materia 3" << std::endl; 
    boby->equip(tmp);
    me->use(2, *bob);
    boby->use(2, *me);
    
    //delete boby;
    delete bob;
    delete me;
    delete src;
    system("leaks a.out");
    return 0;
}