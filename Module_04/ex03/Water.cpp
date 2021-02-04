/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Water.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 11:41:08 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 13:57:18 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Water.hpp"

Water::Water(void) : AMateria("water")
{
	return;
}

Water::~Water(void)
{
	std::cout << "Water destructor called" << std::endl;
	return;
}

Water::Water(Water const &src) : AMateria(src)
{
	*this = src;
	return;
}

Water&					Water::operator=(Water const &obj)
{
	if(this != &obj)
	{
		this->_xp = obj._xp;
		this->_type = obj._type;	
	}
	return *this;
}

std::string const&			Water::getType(void) const
{
	return this->_type;
}

unsigned int				Water::getXP(void) const
{
	return this->_xp;	
}

Water*					Water::clone(void) const
{
	return new Water();
}

void						Water::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << "* Water the strength of a 1000 waterfalls pours down on " << target.getName() << " *" << std::endl;
	return;
}
