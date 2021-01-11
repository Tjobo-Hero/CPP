/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 12:35:27 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/11 12:13:07 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(Pony stack)
{
	stack.initiateName("MyLittleStackPony");
	stack.initiateColor("Blue");
	stack.initiateGender("Stallion");
	stack.initiateAge(10);
	stack.printEverything();
}

void	ponyOnTheHeap(Pony *heap)
{
	heap = new Pony();
	heap->initiateName("MylittleHeapPony");
	heap->initiateColor("Black");
	heap->initiateGender("Merrie");
	heap->initiateAge(5);
	heap->printEverything();
}

int		main(void)
{
	Pony stack;
	Pony* heap;

	heap = NULL;
	std::cout << "*****STACK*****" << std::endl;
	ponyOnTheStack(stack);
	std::cout << "Data stack is gone Stack" << std::endl;
	stack.printEverything();
	std::cout << "*****HEAP******" << std::endl;
	ponyOnTheHeap(heap);
	delete heap;
}