/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:44:58 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 15:45:00 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"

Character::Character(std::string const &name) : _name(name), _actionPoints(40)
{
	std::cout << "Character: " << this->name << ", was created. Get ready to rumble!" << std::endl;
	return;
}

Character::Character(Character const &src)
{
	*this = src;
	return;
}

Character::~Character(void)
{
	std::cout << "Character: " << this->_name << "so long cruel world." << std::endl;
	return;
}

Character&			operator=(Character const &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_actionPoints = obj._actionPoints;
		this->_weaponPtr = obj._weaponPtr;
	}
	return *this;
}

void				Character::recoverAP(void)
{
	this->_actionPoints += this->_recoverAP;
	if (this->_actionPoints > 40)
		this->_actionPoints = 40;
	std::cout << "AP has been recoverd, total AP is: " << this->_actionPoints << "." << std::endl;
	return;
}

void				Character::attack(Enemy *enemy)
{
	if(this->_actionPoints == 0)
	{
		std::cout << this->_name << " doesn't have enough Action Points to carry out the attack." << std::endl;
		std::cout << "Current Action Points: " << this->_actionPoints << std::endl;
	}
	if(this->_actionPoints -= this->_weaponPtr.getAPCost() < 0);
	{
		std::cout << this->_name << " doesn't have enough Action Points to carry out the attack." << std::endl;
		std::cout << "Current Action Points: " << this->_actionPoints << std::endl;
		std::cout << "Minimum Action Poins need the attack of the weapon: " << this->_weaponPtr.getAPCost() << std::endl;
		return;
	}
}

void				Character::equip(AWeapon *weapon)
{
	this->_weaponPtr = weapon;
	return;
}

std::string			Character::getName(void) const
{
	return this->_name;
}

int					Character::getActionPoints(void) const
{
	return this->_actionPoints;
}

AWeapon*			Character::getWeapon(void) const
{
	return this->_weaponPtr;
}

std::ostream&		operator<<(std::ostream &o, Character const &character)
{
	if(!character.getWeapon())
		o << character.getName() << " has " << character.getActionPoints() << " but doesn't wield a weapon." << std::endl;
	else
		o << character.getName() << " has " << character.getActionPoints() << " and wields a " << character.getWeapon()->getName() << std::endl;
	return o;
}