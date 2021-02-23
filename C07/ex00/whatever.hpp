/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 19:38:04 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/23 19:54:53 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template<typename T>
void swap(T &arg1, T &arg2)
{
    T temp;
    temp = arg1;
    arg1 = arg2;
    arg2 = temp;
}

template<typename T>
T &min(T &arg1, T &arg2)
{
    if (arg1 < arg2)
        return arg1;
    if (arg2 < arg1)
        return arg2;
    return arg2;
}

template<typename T>
T &max(T &arg1, T &arg2)
{
    if (arg1 > arg2)
        return arg1;
    if (arg2 > arg1)
        return arg2;
    return arg2;
}

#endif