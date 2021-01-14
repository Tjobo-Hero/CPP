/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 11:32:22 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 12:25:38 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon& Weapon) : _name(Name), _aWeapon(Weapon)
{
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void		HumanA::attack(void)
{
	std::cout << "[" << _name << "] attacks with his [" <<  _aWeapon.getType() << "]" << std::endl;
	return ;
}

