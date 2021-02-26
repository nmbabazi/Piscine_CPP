/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:59:07 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/26 17:50:37 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <string>
# include <vector>

class Span
{

	public:

		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );
		void	addNumber(int add);
		void	addNumber(int start, int end);
		int		shortestSpan();
		int		longestSpan();
		class 	FullCapacityException: public std::exception
		{
			public:
				virtual const char *what() const throw(){
					return "The container is at full capacity";
				}
		};
		class 	NoSpanException: public std::exception
		{
			public:
				virtual const char *what() const throw(){
					return "No span to find";
				}
		};
		

	private:
		Span();
		unsigned int	_capacity;
		std::vector<int> _vect;

};

#endif 