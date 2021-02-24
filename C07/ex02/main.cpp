/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:34:39 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/24 13:50:45 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
    std::cout << std::endl << "############# Test int ###################"
            <<  std::endl << std::endl;
	Array<int> arr1();
    std::cout << "test default constructeur : " << arr1 << std::endl;
    Array<int> arr2(9);
	std::cout << "test full array : " << arr2 << std::endl;
    arr2[5] = 5;
    std::cout << "test operateur[] : " << arr2 << std::endl;
	return 0;
    
}