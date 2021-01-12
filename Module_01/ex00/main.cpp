/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 12:35:27 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 14:39:08 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(Pony stack)
{
	stack.setName("MyLittleStackPony");
	stack.setColor("Blue");
	stack.setGender("Stallion");
	stack.setAge(10);
	stack.printEverything();
}

void	ponyOnTheHeap(Pony *heap)
{
	heap = new Pony();
	heap->setName("MylittleHeapPony");
	heap->setColor("Black");
	heap->setGender("Merrie");
	heap->setAge(5);
	heap->printEverything();
	delete heap;
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
	return (0);
}