/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:20:39 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 11:31:40 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << std::endl << std::endl;
    Bureaucrat saly("Saly", 50);
    Bureaucrat tom("Tom", 10);
    std::cout << "********test init form with a to low grade********" << std::endl;
    try
    {
        Form registration("registration", 1, 167);
    }
    catch (std::exception &e)
    {   
        std::cout << e.what() << std::endl; 
    }
    std::cout << "********test init form with a to high grade********" << std::endl;
    try
    {
        Form subscrition("subscrition", 150, 0);
    }
    catch (std::exception &e)
    {   
        std::cout << e.what() << std::endl; 
    }
    std::cout << "********test signe********" << std::endl;
    Form registration("registration", 10, 140);
    std::cout << registration;
    saly.signForm(registration);
    std::cout << registration;
    tom.signForm(registration);
    std::cout << registration;
    return (0);
}