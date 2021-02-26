/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 18:13:29 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/26 20:07:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack(): std::stack<T>() {};
		MutantStack(MutantStack<T> const &src): std::stack<T>(src) {} ;
		MutantStack& operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return *this;
		}
		virtual ~MutantStack() {};

		//créer des "iterators de stack"
		typedef typename MutantStack<T>::container_type::iterator iterator; 
		typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
        typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;
				
		//récupérer les iterators du container sequentiel contenu dans la stack et les associer à la stack
		iterator begin() { return (this->c.begin()); }
		const_iterator begin() const { return (this->c.begin()); }
		reverse_iterator rbegin() { return (this->c.rbegin()); }
		const_reverse_iterator rbegin() const { return (this->c.rbegin()); }
		iterator end() { return (this->c.end()); }
		const_iterator end() const { return (this->c.end()); }
		reverse_iterator rend() { return (this->c.rend()); }
		const_reverse_iterator rend() const { return (this->c.rend());}

	private:

};

#endif 