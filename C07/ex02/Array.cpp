/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:52:31 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/26 13:39:15 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(): _n(0), _arr(NULL)
{
}

template<typename T>
Array<T>::Array(unsigned int n): _n(n)
{
    _arr = new T[_n];
}

template<typename T>
Array<T>::~Array()
{
    delete[] _arr;
}

template<typename T>
Array<T>::Array(Array<T> const &src)
{
    *this = src;
}

template<typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
    if ( this != &rhs )
	{
		this->_n = rhs._n;
        this->_arr = new T[_n];
        for (size_t i = 0; i < _n; i++)
            this->_arr[i] = rhs._arr[i];
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= _n)
        throw Array<T>::OutOfLimitsException();
    else
        return _arr[index];
    
}

template<typename T>
unsigned int Array<T>::size()const{return _n;}

template <typename T>
char const *Array<T>::OutOfLimitsException::what() const throw()
{
    return "This element is out of the limits!";
}

template<typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> & i )
{
    for (size_t index = 0; index < i.size(); index++)
	    o << i[index] << ", ";
	return o;
}