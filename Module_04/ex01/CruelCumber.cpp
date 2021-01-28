/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CruelCumber.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 14:07:24 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/28 11:46:11 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "CruelCumber.hpp"

CruelCumber::CruelCumber(void) : Enemy(170, "CruelCumber")
{
	std::cout << "Mwuahahahaha CruelCumber comming for you!" << std::endl;
	return;
}

CruelCumber::CruelCumber(CruelCumber const &src) : Enemy(src)
{
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
	damage -= 6;
	if (damage < 0)
		return;
	this->_hp -= damage;
	return;
}