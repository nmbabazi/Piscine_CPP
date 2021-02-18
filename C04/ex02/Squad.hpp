/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:22:24 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/17 12:21:44 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad : public ISquad
{

	public:

		Squad();
		Squad(const Squad & src );
		virtual ~Squad();
		Squad &		operator=( Squad const & rhs );
				
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int index) const;
		virtual int push(ISpaceMarine* topush);

	private:
		typedef struct s_list
		{
			ISpaceMarine *spaceMarine;
			struct s_list *next;
		} t_list;
		
		t_list *_unit;
		void _lstClear();
};

#endif 