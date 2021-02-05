/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Prey.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 13:49:59 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 09:36:35 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Prey.hpp"
#include "Victim.hpp"

Prey::Prey(std::string const &Name) : Victim(Name)
{
	std::cout << "Zog Zog" << std::endl;
	return;
}

Prey::Prey(Prey const &src) : Victim(src)
{
	std::cout << "Copy constructor Prey called." << std::endl;
	*this = src;
	return;
}

Prey::~Prey(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

Prey&		Prey::operator=(Prey const &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &obj)
		this->_name = obj._name;
	return *this;
}

void			Prey::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
	return;
}