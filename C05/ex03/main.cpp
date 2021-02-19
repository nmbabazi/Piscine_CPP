/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:20:39 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 15:47:11 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << std::endl << std::endl;
    Bureaucrat saly("Saly", 50);
    Bureaucrat tom("Tom", 10);
    try
    {
        Bureaucrat Elpresident("elpresident", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "********test signe********" << std::endl;
    ShrubberyCreationForm shrubbery("garden");
    std::cout << shrubbery;
    saly.signForm(shrubbery);
    std::cout << shrubbery;
    PresidentialPardonForm president("tom");
    std::cout << president;
    saly.signForm(president);
    std::cout << president;
    std::cout << "********test ask the intern********" << std::endl;
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Computer");
    std::cout << "********test execut********" << std::endl;
    tom.signForm(president);
    saly.executeForm(president);
    saly.executeForm(shrubbery);
    tom.executeForm(*rrf);
    tom.signForm(*rrf);
    tom.executeForm(*rrf);
    while (saly.getGrade() > 1)
        saly.incrementGrade();
    saly.executeForm(president);
    return (0);
}