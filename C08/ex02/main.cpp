/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:45:47 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/28 14:23:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"
#include <list>

int main()
{
    
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << std::endl << "############# Output à comparer ###################"
        <<  std::endl << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << lst.back() << std::endl;
    lst.pop_back();
    std::cout << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::list<int>::iterator itl = lst.begin();
    std::list<int>::iterator itle = lst.end();
    ++itl;
    --itl;
    while (itl != itle)
    {
        std::cout << *itl << std::endl;
        ++itl;
    }
    std::stack<int, std::list<int> > l(lst);
    std::cout << std::endl;

    std::cout << std::endl << "############# copy ###################"
        <<  std::endl << std::endl;
	MutantStack<int> mut2(mstack);
	MutantStack<int>::iterator it2 = mut2.begin();
	MutantStack<int>::iterator ite2 = mut2.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << std::endl << "############# assignation ###################"
        <<  std::endl << std::endl;
	MutantStack<int> mut3;
	mut3 = mstack;
	MutantStack<int>::iterator it3 = mut3.begin();
	MutantStack<int>::iterator ite3 = mut3.end();
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	std::cout << std::endl;
	std::cout << std::endl << "############# revers ###################"
        <<  std::endl << std::endl;
	MutantStack<int>::reverse_iterator rit = mut3.rbegin();
	MutantStack<int>::reverse_iterator rite = mut3.rend();
    ++rit;
    --rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::cout << std::endl;
    return 0;
}