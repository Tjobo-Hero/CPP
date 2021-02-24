/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/22 13:17:49 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/24 13:56:55 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

// This function will randomize rand by passing the current time
void	setRand(void)
{
	static bool random = false;

	if (!random)
	{
		srand(time(NULL));
		random = true;
	}
	return;
}

// Is a function that randomly instanciates A, B or C
// and returns the instance as a Base pointer.
Base*	generate(void)
{
	int randomIndex = rand() % 3 + 1;

	std::cout << "Generation Function called result: ";
	if (randomIndex == 1)
	{
		std::cout << "[Generated an intstance of [A] class]" << std::endl;
		return new A;
	}
	else if (randomIndex == 2)
	{
		std::cout << "[Generated instance of [B] class]" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "[Generated instance of [C] class]" << std::endl;
		return new C;
	}
	return NULL;
}

// Is a function that displays "A",
// "B" or "C" according to the real type of p.
void	identify_from_pointer(Base *p)
{

	std::cout << "Identify from pointer function called result: ";
	if (dynamic_cast<A*>(p))
	{
		std::cout << "[A]" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "[B]" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "[C]" << std::endl;
		return;
	}
	return;
}

// // Is a function that displays "A",
// // "B" or "C" according to the real type of p.
void	identify_from_reference(Base &p)
{
	// Base *tmp = &p;
	
	// identify_from_pointer(tmp);
	std::cout << "Identify from reference function called result: ";
	try
	{
		A Atmp = dynamic_cast<A&>(p);
		std::cout << "[A]" << std::endl;
		return;
		
	}
	catch(const std::exception& e)
	{
	}
	
	try
	{
		B Btmp = dynamic_cast<B&>(p);
		std::cout << "[B]" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C Ctmp = dynamic_cast<C&>(p);
		std::cout << "[C]" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}
	
}

int 	main(void)
{
	setRand();

	Base *basePtr = generate();

	if (basePtr)
		std::cout << "Generated succesfully\n" << std::endl;
	else
	{
		std::cout << "Generator failed" << std::endl;
		return (0);
	}
	identify_from_pointer(basePtr);
	identify_from_reference(*basePtr);

	std::cout << "\n-----Destructor-----" << std::endl;
	delete basePtr;
	system("leaks realtype | grep bytes");
	return (0);
}
