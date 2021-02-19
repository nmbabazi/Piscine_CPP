/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:37:35 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 14:12:36 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreation", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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

void	ShrubberyCreationForm::exec(Bureaucrat &bureaucrat) const
{

	try
	{
		execute(bureaucrat);
		std::string name = std::string(this->getTarget() + "_shrubbery"); 
		std::ofstream output(name);
		const std::string tree = "\
					v .   ._, |_  .,\n\
				`-._\\/  .  \\ /    |/_\n\
					\\\\  _\\, y | \\//\n\
				_\\_.___\\\\, \\\\/ -.\\||\n\
				`7-,--.`._||  / / ,\n\
				/'     `-. `./ / |/_.'\n\
							|    |//\n\
							|_    /\n\
							|-   |\n\
							|   =|\n\
							|    |\n\
		--------------------/ ,  . \\--------._\n\
		";
		output << tree;
		output.close();
		std::cout << " succes" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << ", can't executed" << '\n';
	}
}