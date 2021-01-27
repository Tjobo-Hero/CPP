/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:07:01 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 12:33:44 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string const &Name) : Victim(Name)
{
	std::cout << "Zog Zog" << std::endl;
	return;
}


Peon::Peon(Peon const &src) : Victim(src)
{
	std::cout << "Copy constructor Peon called." << std::endl;
	*this = src;
	return;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon&		Peon::operator=(Peon const &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &obj)
		this->_name = obj._name;
	return *this;
}

void			Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
	return;
}