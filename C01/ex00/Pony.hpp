/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:02:03 by nailambz          #+#    #+#             */
/*   Updated: 2021/01/28 15:24:44 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <iomanip> 

class   Pony
{

private:
    std::string _name;
    std::string _breed;
    
public:

    Pony(std::string name, std::string breed);
    ~Pony();

    void ponyJump(void);
};

#endif
