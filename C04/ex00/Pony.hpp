/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:10:50 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/10 11:21:43 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Pony : public Victim
{

	public:
	
		Pony(std::string name);
		Pony( Pony const & src );
		virtual ~Pony();

		Pony &			operator=( Pony const & rhs );
		virtual void	getPolymorphed() const;

	private:
		Pony();

};

#endif