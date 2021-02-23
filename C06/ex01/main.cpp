/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 10:56:45 by user42            #+#    #+#             */
/*   Updated: 2021/02/23 13:36:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <time.h>

struct Data { std::string s1; int n; std::string s2; };

void * serialize(void)
{
    srand(time(0));
    char *raw = new char[20];

    char alphanum[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int tab[]={0,1,2,3,4,5,6,7,8,9};
    int i = 0;
	while (i < 8){
		raw[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
		i++;
	}
	*(reinterpret_cast<int*>(raw + 8)) = rand() % (sizeof(tab) - 1);
	i = 12;
	while (i < 20)
	{
		raw[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
		i++;
	}
	return raw;
}

Data * deserialize(void *raw)
{
    Data *data = new Data;
    int i = 0;
    while (i < 8)
    {
        data->s1 += *(reinterpret_cast<char*>(raw) + i);
        i++;
    }
    data->n = *(reinterpret_cast<int*>(raw) + 2);
    i = 12;
    while (i < 20)
    {
        data->s2 += *(reinterpret_cast<char*>(raw) + i);
        i++;
    }
    return(data);

}

int main()
{

	std::cout << "*****************RAW********************" << std::endl;
    char *c = reinterpret_cast<char*>(serialize());
	std::cout << "sequence of 8 char: ";
	for (int i = 0; i < 8; i++)
		std::cout << *(reinterpret_cast<char*>(c + i));
    std::cout << std::endl;
	std::cout << "1 int: ";
	std::cout << *(reinterpret_cast<int*>(c + 8));
    std::cout << std::endl;
	std::cout << "sequence of 8 char: ";
	for (int i = 12; i < 20; i++)
        std::cout << *(reinterpret_cast<char*>(c + i));
    std::cout << std::endl;
    std::cout << "*****************RAW********************" << std::endl;
    Data *dt = deserialize(c);
    std::cout << "string s1 : " << dt->s1  << std::endl;
    std::cout << "string s2 : " << dt->s2  << std::endl;
    std::cout << "int n : " << dt->n  << std::endl;
    delete[] c;
    delete dt;
    
}