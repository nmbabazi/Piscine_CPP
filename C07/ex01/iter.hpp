/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:46:34 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/24 17:28:41 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template<typename T>
void iter(T arg[], size_t len, void (*fct)(T &))
{
    for (size_t i = 0; i < len; i++)
        fct(arg[i]);
    return ;
}

template<typename T>
void fonction(T arg)
{
    std::cout << arg << std::endl;
}

#endif