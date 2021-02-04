/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:34:08 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 13:57:11 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
	return;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
	*this = src;
	return;
}

Ice&					Ice::operator=(Ice const &obj)
{
	if(this != &obj)
	{
		this->_xp = obj._xp;
		this->_type = obj._type;	
	}
	return *this;
}

std::string const&			Ice::getType(void) const
{
	return this->_type;
}

unsigned int				Ice::getXP(void) const
{
	return this->_xp;	
}

Ice*					Ice::clone(void) const
{
	return new Ice();
}

void						Ice::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
