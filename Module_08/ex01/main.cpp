/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 17:02:23 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/02 13:23:33 by timvancitte   ########   odam.nl         */
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

// int		randomInt(void)
// {
// 	int 	randomInt = rand() % 10000000 + 1;

// 	return randomInt;
	
// }

int		main(void)
{
	setRand();
	Span sp1(5);
	Span sp2(1000);
	Span sp3(4);
	Span sp5(4);

	std::cout << "\n-----Try function longest Span with no Span to find------" << std::endl;
	try
	{
		sp3.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n-----Try function shortest Span with no Span to find------" << std::endl;
	try
	{
		sp3.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	sp3.addNumber(12312);
	
	std::cout << "\n-----Try function longest Span with only one number to find------" << std::endl;
	try
	{
		sp3.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n-----Try function shortest Span with only one number to find------" << std::endl;
	try
	{
		sp3.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	for (int i = 0; i < 5; i++)
		sp1.addNumber(rand() % 100 + 1);
	for (int i = 0; i < 1000; i++)
		sp2.addNumber(rand() % 10000000 + 1);
	
	std::cout <<"\n----- Print Array SP1-----" << std::endl;
	std::cout << sp1 << std::endl;
	std::cout << "------Class is full exception-----" << std::endl;
	try
	{
		sp1.addNumber(123123123);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n-----Longest Span-----" << std::endl;
	std::cout << "Longest span SP1: " << sp1.longestSpan() << std::endl;
	std::cout << "Longest span SP2: " << sp2.longestSpan() << std::endl;

	std::cout << "\n-----Shorest Span-----" << std::endl;
	std::cout << "Shortest span SP1: " << sp1.shortestSpan() << std::endl;
	std::cout << "Shortest span SP2: " << sp2.shortestSpan() << std::endl;

	std::cout << "\n-----Copy constructor-----" << std::endl;
	std::cout << "\n-----Print SP1-----" << std::endl;
	std::cout << sp1 << std::endl;
	std::cout << "commencing copy of SP1 into SP4...." << std::endl; 
	Span sp4(sp1);
	std::cout << "\nResult: Print SP4" << std::endl;
	std::cout << sp4 << std::endl;

	std::cout << "\n-----Assignation function-----" << std::endl;
	for (int i = 0; i < 4; i++)
		sp5.addNumber(rand() % 100 + 1);
	std::cout << "\n-----Print SP4-----" << std::endl;
	std::cout << sp4 << std::endl;
	std::cout << "\n-----Print SP5-----" << std::endl;
	std::cout << sp5 << std::endl;	
	
	std::cout << "Commencing assignation of SP4 into SP5...." << std::endl; 
	sp5 = sp4;
	std::cout << "\nResult: Print SP5" << std::endl;
	std::cout << sp4 << std::endl;
	
	
	std::cout << "\n-----Destructor-----" << std::endl;
	return (0);
}