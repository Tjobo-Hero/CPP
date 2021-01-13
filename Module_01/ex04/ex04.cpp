/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:06:35 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/13 12:13:21 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringptr = &string;
	std::string&	stringref = string;

	std::cout << string << std::endl;
	std::cout << *stringptr << std::endl;
	std::cout << stringref << std::endl;

	return(0);
}