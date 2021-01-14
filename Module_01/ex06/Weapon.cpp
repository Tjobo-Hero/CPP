/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 11:32:34 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 12:35:08 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return;
}

Weapon::Weapon(std::string Type) : _type(Type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

void		Weapon::setType(std::string Type)
{
		this->_type = Type;
}

std::string const&	Weapon::getType(void) const
{
	return this->_type;
}

