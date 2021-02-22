/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:19:42 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/22 17:40:38 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <locale>
# include <sstream>
# include <limits>
# include <cfloat>
# include <cmath>
# include <iomanip>
# include <cstring>

class Converter
{
	public:
		Converter(std::string input);
		Converter( Converter const & src );
		~Converter();
		Converter &		operator=( Converter const & rhs );
		
		void	convertInt();
		void	convertFloat();
		void	convertChar();
		void	convertDouble();
		void	setNumeric();
		
		class NoDisplayableException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
		class ImpossibleException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
		class OverflowException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

	private:
		Converter();
		std::string _input;
		bool	_isDigit;
		bool	_isSigned;
		double	_numeric;

};

#endif