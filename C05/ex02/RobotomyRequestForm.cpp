/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:37:35 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 14:11:44 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequest", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_signGrade = rhs.getSignGrade();
		this->_execGrade = rhs.getExecGrade();
		this->_target = rhs.getTarget();
	}
	return *this;
}

void	RobotomyRequestForm::exec(Bureaucrat &bureaucrat) const
{
	try
	{
		execute(bureaucrat);
		if (rand() % 2)
			std::cout << "* BBBBbbbrrrrRRRRZZZZzzzzz * "
				<< this->getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Failed to robotomize "<< this->getTarget() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << ", can't executed" << '\n';
	}
}