/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:07:05 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/25 16:51:07 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string &Name, std::string &Type) : _name(Name), _title(Type)
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

std::ostream&		operator<<(std::ostream &o, Sorcerer const &i)
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}

