/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:37:35 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 14:11:42 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardon", 25, 5)
{
	this->_target = target;
}


PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
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

void	PresidentialPardonForm::exec(Bureaucrat &bureaucrat) const
{
	try
	{
		execute(bureaucrat);
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << ", can't executed" << '\n';
	}
}