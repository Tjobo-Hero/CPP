/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 12:35:27 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/18 15:56:21 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main(void)
{
	Pony stack;
	Pony heap;

	std::cout << "*****STACK*****" << std::endl;
	stack.ponyOnTheStack(stack);
	stack.printEverything();
	std::cout << "*****HEAP******" << std::endl;
	heap.ponyOnTheHeap(&heap);
	heap.printEverything();
	
	return (0);
}