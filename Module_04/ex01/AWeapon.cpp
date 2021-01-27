/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:44:53 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 12:35:13 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	return;
}

AWeapon::~AWeapon(void)
{
	return;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
	return;
}


AWeapon			operator=(Aweapon const &obj)
{
	if(this != &obj)
	{
		this->_name = obj._name;
		this->_apcost = obj._apcost;
		this->_damage = obj._damage;
	}
	return *this;
}

std::string		AWeapon::getName(void) const
{
	return this->_name;
}

int				AWeapon::getAPCost(void) const
{
	return this->_apcost;
}

int				AWeapon::getDamage(void) const
{
	return this->_damage;
}

void			AWeapon::attack(void) const
{
	return;
}
