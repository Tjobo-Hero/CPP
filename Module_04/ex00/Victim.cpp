/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:07:11 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/26 14:23:44 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const &Name) : _name(Name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	return;
}


Victim::Victim(Victim const &src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << getName() << " just died for no apparent reason!" << std::endl;
	return;
}

Victim&		Victim::operator=(Victim const &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	
	this->_name = obj._name;
	return *this;
}

std::string		Victim::getName(void) const
{
	return this->_name;
}

void			Victim::introduce(void) const
{
	std::cout << "I'm " << getName() << ", and I like otters!" << std::endl;
	return;
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
	return;
}
std::ostream&		operator<<(std::ostream &o, Victim const &victim)
{
	o << "I'm " << victim.getName() << ", and i like otters!" << std::endl;
	return o;
}