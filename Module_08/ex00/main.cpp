/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 17:09:30 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/26 10:55:31 by timvancitte   ########   odam.nl         */
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

int		random_int(int type)
{
	int 		randomInt = rand() % 100 + 1;
	static int 	i;
	static bool n = false;
	
	if (!n || i == 6)
	{
		i = 0;
		n = true;
	}
	else
		i += 1;
	if (type == 1)
		std::cout << "List: i: [" << i << "]" << " Random int: " << randomInt << std::endl;
	else
		std::cout << "Vector: i: [" << i << "]" << " Random int: " << randomInt << std::endl;
	return randomInt;
}

int		main(void)
{
	std::list<int>			lst1;
	std::vector<int>		vec1;
	
	// setRand();
	for (int i = 0; i < 7; i++)
	{
		vec1.push_back(random_int(2));
		if (i == 6)
			for (int i = 0; i < 7; i++)
				lst1.push_back(random_int(1));
	}
	
	// std::list<int>::const_iterator	it;
	// std::list<int>::const_iterator	ite = lst1.end();

	// for(it = lst1.begin(); it != ite; it++)
	// {
	// 	std::cout << *it << std::endl;
	// }

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