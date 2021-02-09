/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 17:51:11 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 12:23:43 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include " ClapTrap.hpp"
# include <string>
# include <stdlib.h>

class FragTrap : public ClapTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap();

		FragTrap &		operator=(FragTrap const & rhs);
		unsigned int	vaulthunter_dot_exe(std::string const & target);
		void			sniperAttack(std::string const & target);
		void			rocketAttack(std::string const & target);
		void			laserAttack(std::string const & target);

	private:
	
};

#endif 