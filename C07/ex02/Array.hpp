/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:38:14 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/24 14:11:58 by user42           ###   ########.fr       */
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
        int _n;
        T *_arr;
    
    public:
        Array();
        ~Array();
        Array(int n); 
        Array(Array const &src); 
        Array &		operator=(Array const & rhs); 
        T &		    operator[](int const index);
        class OutOfLimitsException : public std::exception
        {
        public:
            virtual const char *what() const throw();
        };
        int size()const;
};

template<typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> & i );

#endif