/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 17:02:23 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/27 19:34:02 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

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

int		randomInt(void)
{
	int 	randomInt = rand() % 100 + 1;

	return randomInt;
	
}

int		main(void)
{
	Span sp = Span(5);
	setRand();
	Span sp2 = Span(4);
	
	for (int i = 0; i < 5; i++)
		sp.addNumber(randomInt());
	try
	{
		sp.addNumber(123123123);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp2.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << sp << std::endl;
	return (0);
}