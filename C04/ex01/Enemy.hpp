/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:53:50 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/10 15:47:26 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	private:
	protected: 
		Enemy();
		int			_hp;
		std::string _type;
	
	public:
		Enemy(int hp, std::string const & type);
		Enemy( const Enemy & src );
		virtual ~Enemy();
		Enemy &	operator=( Enemy const & rhs );
		
		std::string const	getType() const;
		int					getHP() const;
		virtual void		takeDamage(int amount);

};

#endif 