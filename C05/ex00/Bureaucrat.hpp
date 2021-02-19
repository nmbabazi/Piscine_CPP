/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 19:26:36 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 16:54:12 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{

public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat();

	Bureaucrat &		operator=( Bureaucrat const & rhs );
	std::string const	getName()const;
	int					getGrade()const;
	void				incrementGrade();
	void				decrementGrade();
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "*The grade is to high*";
		}

	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "*The grade is to low*";
		}		

	};
	

private:
	Bureaucrat();
	std::string const _name;
	int			_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif