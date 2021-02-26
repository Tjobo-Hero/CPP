/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 17:02:23 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/26 12:30:13 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void)
{
	Span sp = Span(5);

	sp.addNumber(100);
	sp.addNumber(1212);
	sp.addNumber(123);
	
	std::cout << sp << std::endl;
	return (0);
}