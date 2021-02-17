/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:41:17 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/16 16:10:30 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:
		Ice();
		Ice(const Ice &src);
		~Ice();
		Ice &		operator=(Ice const & rhs );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif 