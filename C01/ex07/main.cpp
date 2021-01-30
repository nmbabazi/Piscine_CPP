/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 19:19:05 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/30 12:55:33 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    replace(std::ofstream &output, std::ifstream &input,
                std::string toReplace, std::string toInsert)
{
    std::string temp;
    while (std::getline(input, temp))
    {
        while(1)
        {
            std::size_t found = temp.find(toReplace);
            if (found!=std::string::npos)
                temp.replace(found, toReplace.length(), toInsert);
            else 
                break ;
        }
        output << temp << std::endl;
    }
    output.close();
}

int main(int ac, char **av)
{
    if (ac == 4 && !std::string(av[1]).empty() && !std::string(av[2]).empty()
        && !std::string(av[3]).empty())
    {
        std::string name = std::string(av[1]) + ".replace"; 
        std::ifstream input(av[1]);
        std::ofstream output(name);
        if (input && output)
            replace(output, input, av[2], av[3]);
        else
            std::cout << "error opening file" << std::endl;
    }
    else 
    {
        std::cout << "wrong argument" << std::endl;
        return (0);
    }
    return (0);
}