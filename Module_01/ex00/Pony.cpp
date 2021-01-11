/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 12:35:23 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/11 12:08:10 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "Consructed Pony!" << std::endl;
	return ;
}

Pony::~Pony()
{
	std::cout << "Destroyed Pony!" << std::endl;
	return ;
}

void	Pony::initiateName(std::string Name)
{
	name = Name;
}

void	Pony::initiateColor(std::string Color)
{
	color = Color;
}

void	Pony::initiateGender(std::string Gender)
{
	gender = Gender;
}

void	Pony::initiateAge(int Age)
{
	age = Age;
}

void	Pony::printEverything()
{
	std::cout << "NAME: [" << name << "]" << " Address: [" << &name << "]" <<std::endl;
	std::cout << "COLOR: [" << color << "]" << " Address: [" << &color << "]" <<std::endl;
	std::cout << "Gender: [" << gender << "]" << " Address: [" << &gender << "]" <<std::endl;
	std::cout << "Age: [" << age << "]" << " Address: [" << &age << "]" <<std::endl;
}
