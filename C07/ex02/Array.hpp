/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:38:14 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/25 16:45:44 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template<typename T>
class Array
{
    private:
        unsigned int _n;
        T *_arr;
    
    public:
        Array();
        ~Array();
        Array(unsigned int n); 
        Array(Array const &src); 
        Array &		operator=(Array const & rhs); 
        T &		    operator[](unsigned int const index);
        class OutOfLimitsException : public std::exception
        {
        public:
            virtual const char *what() const throw();
        };
        unsigned int size()const;
};

template<typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> & i );

#endif