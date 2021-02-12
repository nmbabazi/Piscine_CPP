/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:53:50 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/10 15:47:02 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int			_ap;
		AWeapon *	_currentWeapon;
		
	public:
		Character(std::string const & name);
		Character();
		Character( const Character & src );
		~Character();
		Character &	operator=( Character const & rhs );
		
		void				recoverAP();
		void				equip(AWeapon* weapon);
		void 				attack(Enemy* enemy);
		std::string const	getName() const;
		int					getAP() const;
		AWeapon 			*getWeapon() const;
};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif 