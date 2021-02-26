/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:46:32 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/25 20:39:03 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "iter.hpp"

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() 
{
	std::cout << std::endl << "############# Test char ###################"
        <<  std::endl << std::endl;
	char s[] = "abcdefghij";
	::iter(s, strlen(s), fonction);
    std::cout << std::endl << "############# Test string ###################"
        <<  std::endl << std::endl;
	std::string str[] = {"a", "b", "c", "d"};
	::iter(str, 4, fonction);
	std::cout << std::endl << "############# Test int ###################"
        <<  std::endl << std::endl;
	int tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	::iter(tab, 9, fonction);
	std::cout << std::endl << "############# Test correction ###################"
		<<  std::endl << std::endl;
	{
		int tab[] = { 0, 1, 2, 3, 4 }; 
		Awesome tab2[5];

		iter( tab, 5, print );
		iter( tab2, 5, print );
	}
	return 0;
}