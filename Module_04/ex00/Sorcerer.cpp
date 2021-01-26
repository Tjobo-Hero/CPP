/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:07:05 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/26 12:45:28 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &Name, std::string const &Type) : _name(Name), _title(Type)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return;
}


Sorcerer::Sorcerer(Sorcerer const &src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << getName() << ", " << getTitle() << ", is dead. Consequences will never be the same!" << std::endl;
	return;
}

Sorcerer&		Sorcerer::operator=(Sorcerer const &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	
	this->_name = obj._name;
	this->_title = obj._title;
	return *this;
}

std::string		Sorcerer::getName(void) const
{
	return this->_name;
}

std::string		Sorcerer::getTitle(void) const
{
	return this->_title;
}

void			Sorcerer::introduce(void) const
{
	std::cout << "I am " << getName() << ", " << getTitle() << ", and I like ponies!" << std::endl;
	return;
}

void			Sorcerer::polymorph(Victim const &obj) const
{
	obj.getPolymorphed();
}

std::ostream&		operator<<(std::ostream &o, Sorcerer const &sorcerer)
{
	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}

