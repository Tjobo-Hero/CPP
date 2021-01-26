/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:46 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/26 15:42:17 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return;
}

PowerFist::~PowerFist(void)
{
	return;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src)
{
	return;
}

PowerFist&		PowerFist::operator=(PowerFist const &obj)
{
	this->_name = obj._name;
	this->_apcost = obj._apcost;
	this->_damage = obj._damage;
	return *this;
}

void		PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
}