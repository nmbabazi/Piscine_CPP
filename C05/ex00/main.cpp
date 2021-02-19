/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:20:39 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 11:10:49 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << std::endl << std::endl;
    std::cout << "********test init with a to low grade********" << std::endl;
    try
    {
        Bureaucrat saly("Saly", 167);
        std::cout << saly; 
    }
    catch (std::exception &e)
    {   
        std::cout << e.what() << std::endl; 
    }
    std::cout << "********test init with a to high grade********" << std::endl;
    try
    {
        Bureaucrat saly("Saly", 0);
        std::cout << saly; 
    }
    catch (std::exception &e)
    {   
        std::cout << e.what() << std::endl; 
    }
    std::cout << "********test inc extrem grade******" << std::endl;
    try
    {
        Bureaucrat tom("Tom", 1);
        std::cout << "Incrementation of " << tom; 
        tom.incrementGrade();
    }
    catch (std::exception &e)
    {   
        std::cout << e.what() << std::endl; 
    }
    std::cout << "********test dec extrem grade******" << std::endl;
    try
    {
        Bureaucrat tom("Tom", 150);
        std::cout << "Incrementation of " << tom; 
        tom.decrementGrade();
    }
    catch (std::exception &e)
    {   
        std::cout << e.what() << std::endl; 
    }
    std::cout << "********test with everage grade******" << std::endl;
    try
    {
        Bureaucrat saly("Saly", 34);
        std::cout << "Incrementation of " << saly; 
        saly.incrementGrade();
        std::cout << "Decrementation of " << saly;
        saly.decrementGrade();
        std::cout << saly;
    }
    catch (std::exception &e)
    {   
        std::cout << e.what() << std::endl; 
    }
}