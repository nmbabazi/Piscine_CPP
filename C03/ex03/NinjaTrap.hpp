/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:50:08 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 14:57:25 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include " ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScravTrap.hpp"

class NinjaTrap : public ClapTrap
{

	public:

		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap( NinjaTrap const & src );
		~NinjaTrap();

		NinjaTrap &		operator=(NinjaTrap const & rhs );
		void			ninjaShoebox(ClapTrap &target);
		void			ninjaShoebox(FragTrap &target);
		void			ninjaShoebox(ScravTrap &target);
		void			ninjaShoebox(NinjaTrap &target);

	private:

};

#endif 