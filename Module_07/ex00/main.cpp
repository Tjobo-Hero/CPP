/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 15:16:46 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/25 16:16:26 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

void	own_test(void)
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

	std::cout << "-----Two different types-----\n" << std::endl;
	// std::cout << min(a,c) << std::endl;
	// std::cout << min<float>(a,c) << std::endl;
	return;
}

int		main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );

	std::cout << "\n*****Mandatory Main*****" << std::endl; 
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\n\n*****Own Test function*****" << std::endl;
	own_test();
	
	return (0);
}
