/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 11:32:27 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 12:29:40 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	return;
}

HumanB::HumanB(std::string Name) : _name(Name)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_bWeapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << "[" << _name << "] attacks with his [" <<  _bWeapon->getType() << "]" << std::endl;

	return;	
}




