/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 14:54:39 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 15:03:00 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string mystring = "HI THIS IS BRAIN";

    std::string *stringPtr = &mystring;
    std::string &stringReff = mystring;
    
    std::cout << "Print from ptr:  " << *stringPtr << std::endl;
    std::cout << "Print from reff: " << stringReff << std::endl;
    return (0);
}