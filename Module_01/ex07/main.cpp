/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 12:44:32 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/18 11:12:22 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.Class.hpp"

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Not the right amount of arguments." << std::endl;
		std::cout << "This program takes the following arguments [1. Filename] ; [2. String1] ; [3. String2]" << std::endl;
		std::cout << "Example: 'replace [test.txt] [teststring] [anotherteststring]'" << std::endl;
		
		return (-1);
	}
	if (!argv[2] || !argv[3] || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Error: One the input strings is empty." << std::endl;
		std::cout << "This program takes the following arguments [1. Filename] ; [2. String1] ; [3. String2]" << std::endl;
		std::cout << "Example: 'replace [test.txt] [teststring] [anotherteststring]'" << std::endl;
		
		return (-1);
	}

	Replace instance;

	instance.setReplace(argv[1], argv[2], argv[3]);
	instance.openReplace();
	instance.magicReplace();
	
	return(0);
}
