/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 18:32:04 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 19:35:09 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

	public:

		Sorcerer(std::string name, std::string tile);
		Sorcerer( Sorcerer const & src );
		~Sorcerer();

		Sorcerer &	operator=( Sorcerer const & rhs );
		std::string	getName() const;
		std::string	getTitle() const;
		void 		polymorph(Victim const &victim) const;

	private:
		std::string _name;
		std::string _title;
		Sorcerer();

};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif 