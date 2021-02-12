/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:10:50 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/10 09:15:36 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{

	public:
	
		Peon(std::string name);
		Peon( Peon const & src );
		virtual ~Peon();

		Peon &			operator=( Peon const & rhs );
		virtual void	getPolymorphed() const;

	private:
		Peon();

};

#endif