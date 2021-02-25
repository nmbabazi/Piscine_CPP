/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 19:38:01 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/25 18:56:40 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

class Awesome 
{
    public:
    Awesome( int n ) : _n( n ) {}
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get()const{return _n;}
    private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main( void ) {

    std::cout << std::endl << "############# Test Sujet ###################"
        <<  std::endl << std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << std::endl << "############# Test double ###################"
        <<  std::endl << std::endl;
    double e = 42.7;
    double f = 42.2;
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
    std::cout << std::endl << "############# Test float ###################"
        <<  std::endl << std::endl;
    float g = 42.7f;
    float h = 42.2f;
    ::swap(g, h);
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
    std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;
    std::cout << std::endl << "############# Test char ###################"
        <<  std::endl << std::endl;
    char x = 'x';
    char z = 'z';
    ::swap(x, z);
    std::cout << "x = " << x << ", z = " << z << std::endl;
    std::cout << "min( x, z ) = " << ::min( x, z ) << std::endl;
    std::cout << "max( x, z ) = " << ::max( x, z ) << std::endl;
    std::cout << std::endl << "############# Test Correction ###################"
        <<  std::endl << std::endl;
    Awesome awe(42);
    Awesome some(24);
    ::swap(awe, some);
    std::cout << "awe = " << awe << ", some = " << some << std::endl;
    std::cout << "min( awe, some ) = " << ::min( awe, some ) << std::endl;
    std::cout << "max( awe, some ) = " << ::max( awe, some ) << std::endl;
    return 0;
}