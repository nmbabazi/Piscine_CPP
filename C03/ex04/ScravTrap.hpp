/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:24:48 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 12:23:58 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

# include <iostream>
# include <string>
# include " ClapTrap.hpp"
# include "FragTrap.hpp"
# include <stdlib.h>
# include <time.h> 

class ScravTrap : public ClapTrap
{

	public:

		ScravTrap();
		ScravTrap(std::string name);
		ScravTrap( ScravTrap const & src );
		~ScravTrap();

		ScravTrap &		operator=( ScravTrap const & rhs );
		int				challengeNewcomer(FragTrap & target);

	private:

};

#endif 