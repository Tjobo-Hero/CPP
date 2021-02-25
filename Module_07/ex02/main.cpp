/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 15:50:25 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/25 16:48:01 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	std::cout << "-----Constructor with no paramater and creates an empty array-----" << std::endl;
	Array<int> test;
	std::cout << test;
	std::cout << "Size of test: " << test.size() << std::endl;

	std::cout << "\n----Constructor with parameter----" << std::endl;
	Array<char> test2(4);
	std::cout << "Size of test2: " << test2.size() << std::endl;

	test2[0] = 'w';
	test2[1] = 'o';
	test2[2] = 'r';
	test2[3] = 'k';
	std::cout << test2;

	std::cout << "\n-----Exception with an index out of limits-----" << std::endl;
	try
	{
		// test[-1] = 'a';
		test2[4] = 's';
	}	
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----Assignemnt operator-----" << std::endl;
	Array<std::string> test3;
	Array<std::string> test4(4);
	
	test4[0] = "this";
	test4[1] = "is";
	test4[2] = "still";
	test4[3] = "working";

	std::cout << "Size of test3: " << test3.size() << std::endl;
	std::cout << "Size of test4: " << test4.size() << std::endl;

	std::cout << "\nCommencing Assignemnt..." << std::endl;
	test3 = test4;
	std::cout << "\nResult" << std::endl;
	std::cout << "Size of test3: " << test3.size() << std::endl;
	std::cout << "Size of test4: " << test4.size() << std::endl;

	std::cout << "\nPrinting test3 :" << std::endl;
	std::cout << test3;
	
	std::cout << "\n-----Copy Constructor-----" << std::endl;
	Array<int> test5(6);
	
	test5[0] = 1;
	test5[1] = 23;
	test5[2] = 456;
	test5[3] = 78910;
	test5[4] = 1112131415;
	test5[5] = 1617181920;
	std::cout << test5;
	std::cout << "\nCommencing copy constructor..." << std::endl;
	Array<int> test6(test5);

	std::cout << test6;

	std::cout << "\n------End of tests-----" << std::endl;
	system("leaks array | grep bytes");
	std::cout << "\n-----Destructor-----" << std::endl;
	return (0);
}
