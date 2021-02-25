/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 10:31:01 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/25 16:19:01 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(void)
{
	int int_array[] = {1,2,2,2,2};
	char char_array[] = {"asdf"};
	std::string str[] = {"this ", "is ", "working ", "very ", "well "};
	
	std::cout << "Int array: ";
	iter(int_array, 5, print);
	std::cout << "Char array: ";
	iter(char_array, 4, print);
	std::cout << "Str array: ";
	iter(str, 5, print);
	
	return (0);
}
