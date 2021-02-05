/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:07:01 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 12:05:54 by timvancitte   ########   odam.nl         */
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
		Victim::operator=(obj);
	return *this;
}

void			Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
	return;
}

std::ostream&		operator<<(std::ostream& o, Peon const &Peon)
{
	o << "I am " << Peon.getName() << " and I like otters!" << std::endl;
	return o;
}