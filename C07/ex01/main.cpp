/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:46:32 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/24 17:44:10 by nailambz         ###   ########.fr       */
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
	::iter(s, strlen(s), fonction);
    std::cout << std::endl << "############# Test string ###################"
        <<  std::endl << std::endl;
	std::string str[] = {"a", "b", "c", "d"};
	::iter(str, 4, fonction);
	std::cout << std::endl << "############# Test int ###################"
        <<  std::endl << std::endl;
	int tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	::iter(tab, 9, fonction);
    return (0);
}