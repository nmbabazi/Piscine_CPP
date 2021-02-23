/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:59:22 by user42            #+#    #+#             */
/*   Updated: 2021/02/23 14:43:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base * p)
{
    
    A *Aptr = dynamic_cast<A*>(p);
    if (Aptr != NULL)
    {
        std::cout << "A" << std::endl; return;
    }
    B *Bptr = dynamic_cast<B*>(p);
    if (Bptr != NULL)
    {
        std::cout << "B" << std::endl; return;
    }
    C *Cptr = dynamic_cast<C*>(p);
    if (Cptr != NULL)
    {
        std::cout << "C" << std::endl; return;
    }
    return ;
}

void identify_from_reference( Base & p)
{
    try
    {
        A &Aref = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast &bc)
    {
    }
    try
    {
        B &Bref = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::bad_cast &bc)
    {
    }
    try
    {
        C &Cref = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::bad_cast &bc)
    {
    }
    return ;
    
}

int main()
{
    A a;
    B b;
    C c;
    
    std::cout << "*****************FROM POINTER********************" << std::endl;
    std::cout << "test A :";
    identify_from_pointer(&a);
    std::cout << "test B :";
    identify_from_pointer(&b);
    std::cout << "test C :";
    identify_from_pointer(&c);
    std::cout << "*****************FROM REF********************" << std::endl;
    std::cout << "test A :";
    identify_from_reference(a);
    std::cout << "test B :";
    identify_from_reference(b);
    std::cout << "test C :";
    identify_from_reference(c);
}