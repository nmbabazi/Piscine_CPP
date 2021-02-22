/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:24:45 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/22 19:30:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <math.h>

Converter::Converter(std::string input): _input(input), _isSigned(false), _isDigit(false)
{
	std::locale loc;
	if (isdigit(input[0],loc))
		_isDigit = true;
	if (input[0] == '-' && isdigit(input[1],loc))
		_isDigit = true;
}

Converter::Converter( const Converter & src ){*this = src;}

Converter::~Converter(){}

Converter &				Converter::operator=( Converter const & rhs )
{
	this->_isDigit = rhs._isDigit;
	this->_numeric = rhs._numeric;
	this->_input = rhs._input;
	return *this;
}

const char *Converter::NoDisplayableException::what() const throw(){return "Non displayable";}
const char *Converter::ImpossibleException::what() const throw(){return "impossible";}
const char *Converter::OverflowException::what() const throw(){return "overflow";}

void				Converter::setNumeric()
{
	std::istringstream ss(_input.c_str());
	ss >> _numeric;
	if (_input.length() == 1 && !isdigit(_input.c_str()[0]))
		_numeric = static_cast<double>(_input.c_str()[0]);
}

void Converter::convertChar()
{
	setNumeric();
	if (_input.compare("+inff") == 0 || _input.compare("+inf") == 0 
		|| _input.compare("-inff") == 0 || _input.compare("-inf") == 0
		|| _input.compare("nanf") == 0 || _input.compare("nan") == 0)
		throw Converter::ImpossibleException();
	if(!_isDigit)
	 	std::cout << "char: " << _input.c_str() << std::endl;
	else
	{
		if (_numeric < 33 || _numeric > 126)
		{
			throw Converter::NoDisplayableException();
		}
		else
			std::cout << "char: '" << static_cast<char>(_numeric) << "'" << std::endl;
	}
	
}

void	Converter::convertInt()
{
	setNumeric();
	if (_input.compare("+inff") == 0 || _input.compare("+inf") == 0 
		|| _input.compare("-inff") == 0 || _input.compare("-inf") == 0
		|| _input.compare("nanf") == 0 || _input.compare("nan") == 0)
		throw Converter::ImpossibleException();
	if (_numeric < INT8_MIN || _numeric > INT8_MAX)
		throw Converter::OverflowException();
	else
		std::cout << "int: " << static_cast<int>(_numeric) << std::endl;
}

void	Converter::convertFloat()
{
	setNumeric();
	if (!_input.compare("+inf") || !_input.compare("+inff"))
	{
		std::cout << "float: " << static_cast<float>(INFINITY) << std::endl; return;
	}
	if (!_input.compare("-inf") || !_input.compare("-inff"))
	{
		std::cout << "float: " << static_cast<float>(-INFINITY)<< std::endl; return;
	}
	if (!_input.compare("nanf") || !_input.compare("nan"))
	{
		std::cout << "float: " << static_cast<float>(NAN)<< std::endl; return;
	}
	if ( _numeric > FLT_MAX)
		throw Converter::OverflowException();
	else
	{
		if(floor(_numeric) == _numeric)
			std::cout << "float: " << static_cast<float>(_numeric) << ".0f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(_numeric) << "f" << std::endl;
	}
	
}

void	Converter::convertDouble()
{
	setNumeric();
	if (!_input.compare("+inf") || !_input.compare("+inff"))
	{
		std::cout << "double: " << static_cast<double>(INFINITY)<< std::endl; return;
	}
	if (!_input.compare("-inf") || !_input.compare("-inff"))
	{
		std::cout << "double: " << static_cast<double>(-INFINITY)<< std::endl; return;
	}
	if (!_input.compare("nanf") || !_input.compare("nan"))
	{
		std::cout << "double: " << static_cast<double>(NAN)<< std::endl; return;
	}
	if ( _numeric > DBL_MAX)
		throw Converter::OverflowException();
	else
	{
		if(floor(_numeric) == _numeric)
			std::cout << "double: " << static_cast<double>(_numeric) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(_numeric) << std::endl;
	}
}
