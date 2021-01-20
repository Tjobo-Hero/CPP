/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 12:35:23 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/18 15:55:44 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "Consructed Pony!" << std::endl;
	return ;
}

Pony::~Pony()
{
	std::cout << "Destroyed Pony!" << std::endl;
	return ;
}

void	Pony::setName(std::string Name)
{
	_name = Name;
}

void	Pony::setColor(std::string Color)
{
	_color = Color;
}

void	Pony::setGender(std::string Gender)
{
	_gender = Gender;
}

void	Pony::setAge(int Age)
{
	_age = Age;
}

void	Pony::printEverything() const
{
	std::cout << "NAME: [" << _name << "]" << " Address: [" << &_name << "]" <<std::endl;
	std::cout << "COLOR: [" << _color << "]" << " Address: [" << &_color << "]" <<std::endl;
	std::cout << "Gender: [" << _gender << "]" << " Address: [" << &_gender << "]" <<std::endl;
	std::cout << "Age: [" << _age << "]" << " Address: [" << &_age << "]\n" <<std::endl;
}

void	Pony::ponyOnTheStack(Pony stack)
{
	stack.setName("MyLittleStackPony");
	stack.setColor("Blue");
	stack.setGender("Stallion");
	stack.setAge(10);
	stack.printEverything();
}

void	Pony::ponyOnTheHeap(Pony *heap)
{
	heap = new(std::nothrow) Pony();
	if(heap == NULL)
	{
		std::cerr << "Bad_alloc detected" << std::endl;  
		exit(EXIT_FAILURE);
	}
	heap->setName("MylittleHeapPony");
	heap->setColor("Black");
	heap->setGender("Merrie");
	heap->setAge(5);
	heap->printEverything();
	delete heap;
}