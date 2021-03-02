/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 17:09:30 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/02 13:21:39 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

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

int		main(void)
{
	std::vector<int>	vec1;
	std::list<int>		lst1;
	
	setRand(); // Turn off if you want to find element quicker
	for (int i = 0; i < 7; i++)
		vec1.push_back(rand() % 100 + 1);

	for (int i = 0; i < 7; i++)
		lst1.push_back(rand() % 100 + 1);
	std::cout << "\n-----Print Vector----" << std::endl;
	print(vec1);
	std::cout << "\n-----Print List----" << std::endl;
	print(lst1);
	try
	{
		easyfind(lst1, 79);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(vec1, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}