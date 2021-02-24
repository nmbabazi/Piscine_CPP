/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:52:31 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/24 13:55:33 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(): _n(0)
{
    _arr = new T;
}

template<typename T>
Array<T>::Array(int n): _n(n)
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
    this->operator= (src);
}

template<typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
    if ( this != &rhs )
	{
        if (this->_n)
            delete[] this->_arr;
        delete _arr;
		this->_n = rhs._n;
        this->_arr = new T[_n];
        for (size_t i = 0; i < _n; i++)
            this->_arr[i] = rhs._arr[i];
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](int index)
{
    if (index >= _n)
        throw Array<T>::OutOfLimitsException();
    else
        return _arr[index];
    
}

template<typename T>
int Array<T>::size()const{return _n;}

template <typename T>
char const *Array<T>::OutOfLimitsException::what() const throw()
{
    return "This element is out of the limits!";
}

template<typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & i )
{
    for (size_t index = 0; index < i.size(); index++)
	    o << i[index] << ", ";
	return o;
}