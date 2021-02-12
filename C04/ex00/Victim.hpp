/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 18:59:31 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 19:34:52 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim(std::string name);
		Victim( Victim const & src );
		virtual ~Victim();

		Victim &		operator=( Victim const & rhs );
		std::string		getName() const;
		virtual void	getPolymorphed() const;

	protected:
		Victim();
		std::string		_name;

};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif 