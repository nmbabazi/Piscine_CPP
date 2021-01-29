/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:28:02 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 16:33:20 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){}

Human::~Human(){}

std::string    Human::identify() const
{
    return (this->_brain.identify());
}

Brain const &Human::getBrain()
{
    return (_brain);
}
