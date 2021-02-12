/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:56:01 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/10 17:56:12 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>
# include <string>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;
};

#endif