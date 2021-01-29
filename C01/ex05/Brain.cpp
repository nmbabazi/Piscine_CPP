/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:24:56 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 17:00:29 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){}

Brain::~Brain(){}

std::string    Brain::identify() const
{
    std::stringstream ss;
    ss << this;  
    std::string address = ss.str(); 
    return(address);
}