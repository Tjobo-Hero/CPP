/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 13:31:01 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/02 17:43:04 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int		main(void)
{
	MutantStack<int> mstack;
	int i = 0;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "Pop: remove the element on top of the stack;" << std::endl;
	std::cout << "Mstack is now size: ";
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
    	std::cout << "i: [" << i++ << "] = "<< *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack); 
	return (0);
}