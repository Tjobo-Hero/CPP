/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:33:54 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 14:00:46 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
	return;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl; 
	return;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
	return;
}

AMateria&					AMateria::operator=(AMateria const &obj)
{
	if(this != &obj)
	{
		this->_xp = obj._xp;
		this->_type = obj._type;	
	}
	return *this;
}

std::string const&			AMateria::getType(void) const
{
	return this->_type;
}

unsigned int				AMateria::getXP(void) const
{
	return this->_xp;	
}

void						AMateria::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << target.getName() << " got 10 xp added" << std::endl;
	return;
}
