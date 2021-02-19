/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:48:52 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 17:47:07 by user42           ###   ########.fr       */
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
	virtual ~Form();

	Form &		operator=( Form const & rhs );
	std::string const getName()const;
    int			getSignGrade()const;
    int			getExecGrade()const;
    bool		getStatus()const;
    void		beSigned(Bureaucrat &bureaucrat);
	std::string getTarget()const;
	void		setTarget(std::string set);
	void		setStatus(bool set);
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
private:
	Form();
	std::string const _name;
    int const       _signGrade;
	int	const		_execGrade;
    bool			_status;
	std::string _target;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif