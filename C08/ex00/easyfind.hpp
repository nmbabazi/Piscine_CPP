/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:12:08 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/26 15:21:18 by nailambz         ###   ########.fr       */
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
		virtual const char *what() const throw(){
			return "Not found in container";
		}
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