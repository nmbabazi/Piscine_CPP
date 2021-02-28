/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:59:18 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/28 14:07:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
#include <climits>

Span::Span()
{
}

Span::Span(unsigned int N): _capacity(N)
{
	_vect.reserve(N);
}

Span::Span( const Span & src )
{
	*this = src;
}

Span::~Span()
{
}

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_vect = rhs._vect;
	}
	return *this;
}

void	Span::addNumber(int add)
{
	if (_vect.size() == _capacity)
		throw Span::FullCapacityException();
	_vect.push_back(add);	
}

void	Span::addNumber(int start, int end)
{
	for (int i = start; i <= end; i++)
	{
		if (_vect.size() == _capacity)
			throw Span::FullCapacityException();
		_vect.push_back(i);
	}
}

int		Span::shortestSpan()
{
	if (_vect.size() <= 1)
		throw Span::NoSpanException();
	std::sort(_vect.begin(), _vect.end());
	int ret = INT_MAX;
	for(size_t i = 0; i < (_vect.size() - 1); i++)
	{
		if (_vect[i + 1] - _vect[i] < ret)
			ret = _vect[i + 1] - _vect[i];
	}
	return ret;
}

int		Span::longestSpan()
{
	if (_vect.size() <= 1)
		throw Span::NoSpanException();
	int max = *std::max_element(_vect.begin(), _vect.end());
    int min = *std::min_element(_vect.begin(), _vect.end());
	return max - min;
}

const char *Span::FullCapacityException::what() const throw()
{
	return "The container is at full capacity";
}

const char *Span::NoSpanException::what() const throw()
{
	return "No span to find";
}