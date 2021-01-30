/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:26:52 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/30 15:13:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
    std::string input;
    std::string::size_type sz;
    
    std::cout << "Welcom to the zombie factorie" << std::endl;
    std::cout << "      How many zombie do you need :";
    while (std::getline (std::cin,input))
	{
		if (!isdigit(input[0]))
			std::cout << "      ERROR number: How many zombie do you need: ";
		else
			break ;
	}
    ZombieHorde zombieHorde(std::stoi(input, &sz));
    zombieHorde.announce();
    return (0);
}