/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:53:50 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/10 15:46:06 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	private:
	protected: 
		AWeapon();
		std::string _name;
		int			_apcost;
		int			_damage;
	
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon( const AWeapon & src );
		virtual ~AWeapon();
		AWeapon &	operator=( AWeapon const & rhs );
		std::string const	getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;

};

#endif 