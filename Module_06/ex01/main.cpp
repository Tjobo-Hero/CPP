/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 16:51:44 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/19 17:10:39 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct			Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void*	serialize(void)
{
	const char randomarray[37] = {"1234567890abcdefghijklmnopqrstuvwxyz"};
	
	// This function will return the address on the heap of a sequence
	// of bytes that represent a piece of serialized data. 
	
}

Data*	deserialize(void *raw)
{
	//This function will deserialize the raw data toa Data structure defined as struct..
	
}

int		main(void)
{
	srand(time(NULL));
	
}