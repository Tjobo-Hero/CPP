/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CruelCumber.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 14:07:24 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 15:00:24 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "CruelCumber.hpp"

CruelCumber::CruelCumber(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Mwuahahahaha CruelCumber comming for you!" << std::endl;
	return;
}

CruelCumber::CruelCumber(CruelCumber const &src)
{
	*this = src;
	return;
}

CruelCumber::~CruelCumber(void)
{
	std::cout << "I'll be back, as ComeBackCumber." << std::endl;
	return;
}

CruelCumber&		CruelCumber::operator=(CruelCumber const &obj)
{
	if(this != &obj)
	{
		this->_hp = obj._hp;
		this->_type = obj._type;
	}
	return *this;
}

std::string		CruelCumber::getType(void) const
{
	return this->_type;
}

int				CruelCumber::getHP(void) const
{
	return this->_hp;
}

void			CruelCumber::takeDamage(int damage)
{
	damage -= this->_damageReduction;
	if (damage < 0)
		return;
	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
	return;
}