/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:26:52 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 14:43:37 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
    std::string input;
    std::string::size_type sz;
    
    std::cout << "Welcom to the zombie factorie" << std::endl;
    std::cout << "      How many zombie do you need :";
    std::getline (std::cin,input);
    ZombieHorde zombieHorde(std::stoi(input, &sz));
    zombieHorde.announce();
    return (0);
}