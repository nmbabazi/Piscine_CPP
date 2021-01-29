/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:14:58 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/29 16:33:25 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class   Human
{
private:
    Brain const _brain;

public:
    Human();
    ~Human();

    std::string    identify() const;
    Brain const &getBrain();
};

#endif