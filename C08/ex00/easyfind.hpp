/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:12:08 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/28 14:03:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>

class NotFoundException: public std::exception
{
	public:
		NotFoundException(){}
		virtual const char *what() const throw();
};


template<typename T>
void  easyfind(T &container, int n)
{
    typename T::iterator it = find (container.begin(), container.end(), n);
    if (it != container.end())
        std::cout << *it << " found in the container" << std::endl;
    else
        throw NotFoundException();
} 

#endif