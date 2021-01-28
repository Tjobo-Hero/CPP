/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:02 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/28 11:45:15 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
	return;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
	return;
}

Enemy::~Enemy(void)
{
	return;
}

Enemy&		Enemy::operator=(Enemy const &obj)
{
	if(this != &obj)
	{
		this->_hp = obj._hp;
		this->_type = obj._type;
	}
	return *this;
}

std::string		Enemy::getType(void) const
{
	return this->_type;
}

int				Enemy::getHP(void) const
{
	return this->_hp;
}

void			Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	this->_hp -= damage;
	return;
}