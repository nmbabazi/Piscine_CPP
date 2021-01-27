/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:37:26 by nmbabazi          #+#    #+#             */
/*   Updated: 2021/01/27 18:47:38 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    Phonebook   phonebook;
    
    std::string input;
    while (1)
    {
        std::cout << "ADD SEARCH or EXIT >> ";
        std::getline (std::cin,input);
        if (!input.compare("EXIT"))
            break ;
        if (!input.compare("ADD"))
            phonebook.addcontact();
        if (!input.compare("SEARCH"))
            phonebook.searchcontact();
        if (input.compare("SEARCH") && input.compare("ADD") && input.compare("EXIT"))
            input.clear();
    }
    return (0);
}