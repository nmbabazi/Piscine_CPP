/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:48:52 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 11:06:43 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Form
{

public:

	Form(std::string name, int signGrade, int execGrade);
	Form( Form const & src );
	~Form();

	Form &		operator=( Form const & rhs );
	std::string getName()const;
    int			getSignGrade()const;
    int			getExecGrade()const;
    bool		getStatus()const;
    void		beSigned(Bureaucrat &bureaucrat);
    class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
private:
	Form();
	std::string _name;
    int         _signGrade;
	int			_execGrade;
    bool        _status;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif