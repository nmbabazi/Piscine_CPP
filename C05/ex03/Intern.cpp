/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:26:56 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 16:21:15 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern( const Intern & src ){*this = src;}

Intern::~Intern()
{
}

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

Form *Intern::creatRobot(std::string target){return new RobotomyRequestForm(target);}
Form *Intern::creatPresident(std::string target){return new PresidentialPardonForm(target);}
Form *Intern::creathrubbery(std::string target){return new ShrubberyCreationForm (target);}

Form	*Intern::makeForm(std::string name, std::string target)
{
	typedef Form* (*funct)(std::string target);
	funct tab[] = {&creatRobot, &creatPresident, &creathrubbery};
	std::string names[]= {"robotomy request", "presidential pardon", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (name.compare(names[i]) == 0)
			return tab[i](target);
	}
	std::cout << "unknown form type" << std::endl;
	return NULL;
}