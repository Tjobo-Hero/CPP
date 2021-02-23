/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 15:16:46 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/23 15:46:52 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int		main(void)
{
	int 	a = 4;
	int 	b = 2;

	float	c = 1.4f;
	float	d = 2.2f;

	char	e = 'a';
	char	f = 'y';

	std::cout <<"\n-----Min template function-----" << std::endl;
	std::cout << "INT:   Min of " << a << " and " << b << " is :";
	std::cout << min(a, b) << std::endl;
	std::cout << "Float: Min of " << c << " and " << d << " is :";
	std::cout << min(c, d) << std::endl;
	std::cout << "Char:  Min of " << e << " and " << f << " is :";
	std::cout << min(e, f) << std::endl;

	std::cout <<"\n-----Max template function-----" << std::endl;
	std::cout << "INT:   Max of " << a << " and " << b << " is :";
	std::cout << max(a, b) << std::endl;
	std::cout << "Float: Max of " << c << " and " << d << " is :";
	std::cout << max(c, d) << std::endl;
	std::cout << "Char:  Max of " << e << " and " << f << " is :";
	std::cout << max(e, f) << std::endl;

	std::cout <<"\n-----Swap template fucntion-----" << std::endl;
	std::cout << "INT:   Swap " << a << " and " << b << " result is : ";
	swap(a, b);
	std::cout << a << " and " << b << std::endl;
	std::cout << "Float: Swap " << c << " and " << d << " result is : ";
	swap(c, d);
	std::cout << c << " and " << d << std::endl;
	std::cout << "Char:  Swap " << e << " and " << f << " result is : ";
	swap(e, f);
	std::cout << e << " and " << f << std::endl;
	// std::cout << "Float: max of " << c << " and " << d << " is :";
	// std::cout << max(c, d) << std::endl;
	// std::cout << "Char:  max of " << e << " and " << f << " is :";
	// std::cout << max(e, f) << std::endl;
	
	return (0);
}
