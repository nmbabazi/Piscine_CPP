/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:37:35 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 17:44:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreation", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): Form(src)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->setStatus(rhs.getStatus());
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

void	ShrubberyCreationForm::exec(Bureaucrat &bureaucrat) const
{

	try
	{
		execute(bureaucrat);
		std::ofstream output((getTarget() + "_shrubbery").c_str());
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
		std::cout << e.what() << ", can't be executed" << '\n';
	}
}