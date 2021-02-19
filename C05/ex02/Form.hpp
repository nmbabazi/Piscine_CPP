/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:48:52 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 13:02:16 by nailambz         ###   ########.fr       */
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
	std::string getTarget()const;
	void		execute(Bureaucrat const & executor)const;
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
	class NoteSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	virtual void	exec(Bureaucrat &bureaucrat) const = 0;
protected:
	Form();
	std::string _name;
    int         _signGrade;
	int			_execGrade;
    bool        _status;
	std::string _target;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif