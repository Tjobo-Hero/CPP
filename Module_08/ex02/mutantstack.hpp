/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 13:31:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/02 17:32:32 by timvancitte   ########   odam.nl         */
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
		iterator				begin(void) { return this->c.begin()}
		iterator				end(void) { return this->c.end() }
		const_iterator			begin(void) const { return this->c.begin(); }
		const_iterator			end(void)const {return this->c.end(); }
		reverse_iterator		res_begin(void) {return this->c.rend(); }
		reverse_iterator		res_end(void) {return return this->c.rend(); }
		const_reverse_iterator	res_begin(void) const { return this->c.rend(); }
		const_reverse_iterator	res_end(void) const { return this->c.rend(); }
};

#endif
