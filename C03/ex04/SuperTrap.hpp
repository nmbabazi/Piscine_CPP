/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:32:10 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 15:57:35 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

	public:

		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap( SuperTrap const & src );
		~SuperTrap();

		SuperTrap &		operator=( SuperTrap const & rhs );
		void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);

	private:

};

#endif 