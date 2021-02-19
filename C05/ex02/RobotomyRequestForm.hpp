/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:35:38 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/19 17:36:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		void	exec(Bureaucrat &bureaucrat) const;

	private:
		RobotomyRequestForm();
};
#endif 