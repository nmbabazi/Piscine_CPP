/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:23:45 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 11:31:00 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(){}

Form::Form(std::string name, int signGrade, int execGrade): _name(name),
			_signGrade(signGrade), _execGrade(execGrade), _status(false)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const  Form & src ){*this = src;}

Form::~ Form(){}


Form &				 Form::operator=(  Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_signGrade = rhs.getSignGrade();
		this->_execGrade = rhs.getExecGrade();
	}
	return *this;
}

std::string Form::getName()const {return _name;}
int			Form::getSignGrade()const {return _signGrade;}
int			Form::getExecGrade()const {return _execGrade;}
bool		Form::getStatus()const {return _status;}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_status = true;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "the grade is to high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "the grade is to low";
}

std::ostream &			operator<<( std::ostream & o,  Form const & i )
{
	if (i.getStatus())
		o << i.getName() << " form (can be signed by a " << i.getSignGrade()
		<< " grade or higher and executed by a " << i.getExecGrade() << " grade or higher) :"
		<< " is curently signed" << std::endl;
	else if (!i.getStatus())
		o << i.getName() << " form (can be signed by a " << i.getSignGrade()
		<< " grade or higher and executed by a " << i.getExecGrade() << " grade or higher) :"
		<< " haven't been signed" << std::endl;
	return o;
}