/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:46:32 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/24 11:23:14 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "iter.hpp"



int main()
{
	std::cout << std::endl << "############# Test char ###################"
        <<  std::endl << std::endl;
	char s[] = "abcdefghij";
	::iter(s, strlen(s), fonction<char>);
    std::cout << std::endl << "############# Test string ###################"
        <<  std::endl << std::endl;
	std::string str[] = {"a", "b", "c", "d"};
	::iter(str, 4, fonction<std::string>);
	std::cout << std::endl << "############# Test int ###################"
        <<  std::endl << std::endl;
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	::iter(tab, 10, fonction<int>);
    return (0);
}