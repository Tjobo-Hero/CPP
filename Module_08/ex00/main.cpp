/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 17:09:30 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/25 17:32:59 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int		main(void)
{
	std::list<int>			test1(5);
	// std::list<std::string>		test2(5);
	std::vector<std::string> test2(5);	

	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = test2.end();
	
	for(it = std::begin(test2))

	test1.push_back(1);
	test1.push_back(2);
	test1.push_back(3);
	test1.push_back(4);
	test1.push_back(5);

	easyfind(test1, 4);
	return (0);
}