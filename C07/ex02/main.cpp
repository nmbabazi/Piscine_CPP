/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:34:39 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/26 14:00:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.cpp"
#include <iostream>
#include <string>

int main()
{

    std::cout << std::endl << "############# Test int ###################"
            <<  std::endl << std::endl;
	Array<int> arr1;
    std::cout << "test default constructeur : " << arr1 << std::endl;
    Array<int> arr2(9);
	std::cout << "test full array : " << arr2 << std::endl;
    arr2[5] = 5;
    std::cout << "test operateur[] : " << arr2 << std::endl;
    try
    {
        arr2[24] = 7;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl; 
    }
    std::cout << std::endl << "############# Test string ###################"
        <<  std::endl << std::endl;
	Array<std::string> arr3;
    std::cout << "test default constructeur : " << arr3 << std::endl;
    Array<std::string> arr4(9);
	std::cout << "test full array : " << arr4 << std::endl;
    arr4[5] = "salut";
    std::cout << "test operateur[] : " << arr4 << std::endl;
    try
    {
        arr4[24] = "bonjour";
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl; 
    }
    std::cout << std::endl << "############# Test Array ###################"
        <<  std::endl << std::endl;
	Array< Array<int> > inseption;
    std::cout << "test default constructeur : " << inseption << std::endl;
    Array< Array<int> > fullInseption(3);
	std::cout << "test full array : " << fullInseption << std::endl;
    Array<int> inside(3);
    inside[1] = 42;
    fullInseption[0] = inside;
    std::cout << "test operateur[] : " << fullInseption[0][1] << std::endl;
    try
    {
        fullInseption[1][1] = 3;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl; 
    }
    std::cout << std::endl << "############# Test assignation/copy ###################"
        <<  std::endl << std::endl;
    
    arr1 = arr2;
    std::cout << "test arr1 = arr2 (print arr1): " << arr1 << std::endl;
    Array<std::string> arr5(arr4);
    std::cout << "test arr5 from arr4 (print arr5): " << arr5 << std::endl;
	return 0;
    
}