/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:37:35 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 17:18:58 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardon", 25, 5)
{
	this->setTarget(target);
}


PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): Form(src)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->setStatus(rhs.getStatus());
		this->setTarget(rhs.getTarget());
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
		std::cout << e.what() << ", can't be executed" << '\n';
	}
}