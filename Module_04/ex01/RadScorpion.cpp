/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:51 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 14:04:23 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const &src)
{
	*this = src;
	return;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion&		RadScorpion::operator=(RadScorpion const &obj)
{
	if(this != &obj)
	{
		this->_hp = obj._hp;
		this->_type = obj._type;
	}
	return *this;
}

std::string		RadScorpion::getType(void) const
{
	return this->_type;
}

int				RadScorpion::getHP(void) const
{
	return this->_hp;
}

void			RadScorpion::takeDamage(int damage)
{
	if (damage < 0)
		return;
	if((this->_hp -= damage) <= 0);
	else
		this->_hp = 0;
	return;
}