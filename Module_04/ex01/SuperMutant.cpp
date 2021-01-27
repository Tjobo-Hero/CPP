/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:56 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 14:02:35 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const &src)
{
	*this = src;
	return;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return;
}

SuperMutant&		SuperMutant::operator=(SuperMutant const &obj)
{
	if(this != &obj)
	{
		this->_hp = obj._hp;
		this->_type = obj._type;
	}
	return *this;
}

std::string		SuperMutant::getType(void) const
{
	return this->_type;
}

int				SuperMutant::getHP(void) const
{
	return this->_hp;
}

void			SuperMutant::takeDamage(int damage)
{
	damage -= this->_damageReduction;
	if (damage < 0)
		return;
	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
	return;
}