/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:19:59 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/28 14:03:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <set>

const char *NotFoundException::what() const throw()
{
	return "Not found in container";
}


int main()
{
    std::cout << std::endl << "############# Test vector ###################"
        <<  std::endl << std::endl;
    std::vector<int> vec1;
    for (int i = 0; i < 9; i++)
        vec1.push_back(i);
    std::vector<int> vec2;
    for (int i = 10; i < 19; i++)
        vec2.push_back(i);
    try
    {
        easyfind(vec1, 3);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(vec2, 3);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << "############# Test set ###################"
        <<  std::endl << std::endl;
    std::set<int> set1;
    for (int i = 0; i < 9; i++)
        set1.insert(i);
    std::set<int> set2;
    for (int i = 10; i < 19; i++)
        set2.insert(i);
    try
    {
        easyfind(set1, 3);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(set2, 3);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}