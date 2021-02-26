/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:41:36 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/26 20:15:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>

int main()
{
    std::cout << std::endl << "############# Test sujet ###################"
        <<  std::endl << std::endl;
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl << "############# Test full ###################"
        <<  std::endl << std::endl;
    try
    {
        sp.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << "############# Test span exception ###################"
        <<  std::endl << std::endl;
    Span sp1(5);
    try
    {
        std::cout << sp1.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    sp1.addNumber(1234);
    try
    {
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << "############# Test super big range ###################"
        <<  std::endl << std::endl;
    Span sp2(10200);
    try
    {
        sp2.addNumber(1,10200);
        std::cout << "The range has been added successfully " << std::endl;
        sp2.addNumber(5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
}