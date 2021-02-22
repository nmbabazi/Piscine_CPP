/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 17:40:26 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/22 17:55:15 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int parsInput(std::string input)
{
	int i = 0;
	std::locale loc;
	if (input.compare("+inff") == 0 || input.compare("+inf") == 0 
		|| input.compare("-inff") == 0 || input.compare("-inf") == 0
		|| input.compare("nanf") == 0 || input.compare("nan") == 0)
		return (0);
	if (std::isprint(input[i]) && input.length() == 1)
		return (0);
	if (input[i] == '-')
		i++;
	if (!isdigit(input[i],loc))
		return (-1);
	i++;
	while (isdigit(input[i],loc))
		i++;
	if (input[i] == '.')
	{
			i++;
		if (input[i] && !isdigit(input[i],loc))
			return (-1);
		while (isdigit(input[i],loc))
			i++;
		if (input[i] && input[i] == 'f')
			i++;
		if (input[i])
			return (-1);
		else 
			return (0);
	}
	if (input[i])
		return (-1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 2 || parsInput(av[1]) != 0)
	{
		std::cout << "ERROR: the program needs ONE scalar type argument." << std::endl;
		return (0);
	}
	Converter convert(av[1]);
	try
	{
		convert.convertChar();
	}
	catch(const std::exception& e)
	{
		std::cerr << "char: " << e.what() << '\n';
	}
	try
	{
		convert.convertInt();
	}
	catch(const std::exception& e)
	{
		std::cerr << "int: " << e.what() << '\n';
	}
	try
	{
		convert.convertDouble();
	}
	catch(const std::exception& e)
	{
		std::cerr << "double: " << e.what() << '\n';
	}
	try
	{
		convert.convertFloat();
	}
	catch(const std::exception& e)
	{
		std::cerr << "float: " << e.what() << '\n';
	}
	return (0);
}