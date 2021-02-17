/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:31:37 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/16 16:09:00 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:
		Cure();
		Cure(const Cure &src);
		~Cure();
		Cure &		operator=(Cure const & rhs );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif 