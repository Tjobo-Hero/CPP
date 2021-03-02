/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 13:31:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/02 14:59:34 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template< typename T>
class MutantStack : public std::stack<T>
{		
	public:
		MutantStack(){}
		MutantStack(MutantStack const &src){ *this = src; }
		virtual ~MutantStack(){}

		MutantStack&			operator=(MutantStack const &obj){
			if (this != &obj)
				std::stack<T>::operator=(obj);
		}
	
		typedef typename 		std::stack<T>::container_type::iterator 				iterator;
		typedef typename 		std::stack<T>::container_type::const_iterator 			const_iterator;
		typedef typename 		std::stack<T>::container_type::reverse_iterator 		reverse_iterator;
		typedef typename 		std::stack<T>::container_type::const_reverse_iterator 	const_reverse_iterator;
		iterator				begin(void) { return this->begin()};
		iterator				end(void);
		const_iterator			begin(void);
		const_iterator			end(void);
		reverse_iterator		begin(void);
		reverse_iterator		end(void);
		const_reverse_iterator	begin(void);
		const_reverse_iterator	end(void);
};

#endif
