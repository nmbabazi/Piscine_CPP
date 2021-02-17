/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:24:27 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/16 15:57:43 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	private:
		std::string _type;
		unsigned int _xp;
		AMateria();
		
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &);
		virtual ~AMateria();
		AMateria & operator=(AMateria const & rhs );
		
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif 