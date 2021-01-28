/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 19:07:20 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/27 19:23:10 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    upper(char *str)
{
    int i = 0;
    char c;
    
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            c = str[i] - 32;
        else
           c = str[i];
        std::cout << c;
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < ac; i++)
        {
            upper(av[i]);
        }
    }
    std::cout << std::endl;
    return (0);
}