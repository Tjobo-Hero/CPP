/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:34:03 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 13:56:50 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
	return;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	*this = src;
	return;
}

Cure&					Cure::operator=(Cure const &obj)
{
	if(this != &obj)
	{
		this->_xp = obj._xp;
		this->_type = obj._type;	
	}
	return *this;
}

std::string const&			Cure::getType(void) const
{
	return this->_type;
}

unsigned int				Cure::getXP(void) const
{
	return this->_xp;	
}

Cure*					Cure::clone(void) const
{
	return new Cure();
}

void						Cure::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
	return;
}
