/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:44:58 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 09:48:25 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"

Character::Character(std::string const &name) : _name(name), _actionPoints(40), _weaponPtr(NULL)
{
	std::cout << "Character: " << this->_name << ", was created. Get ready to rumble!" << std::endl;
	return;
}

Character::Character(Character const &src)
{
	*this = src;
	return;
}

Character::~Character(void)
{
	std::cout << "Character: " << this->_name << " so long cruel world." << std::endl;
	return;
}

Character&			Character::operator=(Character const &obj)
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
	this->_actionPoints += 10;
	if (this->_actionPoints > 40)
		this->_actionPoints = 40;
	std::cout << "AP has been recoverd, total AP is: " << this->_actionPoints << "." << std::endl;
	return;
}

void				Character::attack(Enemy *enemy)
{
	if(!enemy)
	{
		std::cout << "The character can't fight NULL. Please provide the character wit a valid Enemy." << std::endl;
		return;
	}
	else if(!this->_weaponPtr)
	{
		std::cout << this->_name << " is unarmed, please equip it wit a weapon." << std::endl;
		return;
	}
	else if(this->_actionPoints == 0)
	{
		std::cout << this->_name << " doesn't have enough Action Points to carry out the attack." << std::endl;
		std::cout << "Current Action Points: " << this->_actionPoints << std::endl;
		return;
	}
	else if(this->_actionPoints < this->_weaponPtr->getAPCost())
	{
		std::cout << this->_name << " doesn't have enough Action Points to carry out the attack." << std::endl;
		std::cout << "Current Action Points: " << this->_actionPoints << std::endl;
		std::cout << "Minimum Action Poins needed to attack with this weapon: " << this->_weaponPtr->getAPCost() << std::endl;
		std::cout << "Please change weapon or use the funtion recoverAP." << std::endl;
		return;
	}
	else
	{
		std::cout << this->_name << " attacks " << enemy->getType() << " wit a " << this->_weaponPtr->getName() << std::endl;
		this->_actionPoints -= this->_weaponPtr->getAPCost();
		this->_weaponPtr->attack();
		enemy->takeDamage(this->_weaponPtr->getDamage());
		if(enemy->getHP() <= 0)
		{
			std::cout << this->_name << " killed the following enemy: " << enemy->getType() << std::endl;
			delete enemy;
			return;
		}
		std::cout << enemy->getType() << "has HP left: " << enemy->getHP() << std::endl;
		return;
	}
}

void				Character::equip(AWeapon *weapon)
{
	if(!weapon)
	{
		std::cout << "Please equip the character with a weapon and not with NULL." << std::endl;
		return;
	}
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
	if(character.getWeapon())
		o << character.getName() << " has " << character.getActionPoints() << " AP, and wields a " << character.getWeapon()->getName() << std::endl;
	else
		o << character.getName() << " has " << character.getActionPoints() << " AP, but doesn't wield a weapon. Please equip " << character.getName() << " with a weapon." << std::endl;
	return o;
}