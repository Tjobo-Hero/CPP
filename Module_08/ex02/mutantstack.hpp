/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 13:31:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/03 13:29:46 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template< typename T>
class MutantStack : public std::stack<T>
{	
	public:
		MutantStack() : std::stack<T>(){}
		MutantStack(std::deque<T> const &obj) : std::stack<T>(obj){}
		MutantStack(MutantStack const &src){
			*this = src; 
			return;
		}
		virtual ~MutantStack(){
			std::cout << "Destructor called" << std::endl;
			return;
		}

		MutantStack&			operator=(MutantStack const &obj){
			if (this != &obj)
				std::stack<T>::operator=(obj);
			return *this;
		};
	
		typedef typename 		std::stack<T>::container_type::iterator 				iterator;
		iterator				begin(void) { return this->c.begin(); }
		iterator				end(void) { return this->c.end(); }
		
		typedef typename 		std::stack<T>::container_type::const_iterator 			const_iterator;
		const_iterator			begin(void) 	const { return this->c.begin(); }
		const_iterator			end(void)		const {return this->c.end(); }
		
		typedef typename 		std::stack<T>::container_type::reverse_iterator 		reverse_iterator;
		reverse_iterator		rbegin(void) {return this->c.rbegin(); }
		reverse_iterator		rend(void) { return this->c.rend(); }
		
		typedef typename 		std::stack<T>::container_type::const_reverse_iterator 	const_reverse_iterator;
		const_reverse_iterator	rbegin(void) 	const { return this->c.rbegin(); }
		const_reverse_iterator	rend(void) 		const { return this->c.rend(); }
};

#endif
