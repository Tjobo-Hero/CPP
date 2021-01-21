/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 12:38:14 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/21 14:55:01 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("")
{
	std::cout << "Parent - CL4P-TP constructor called." << std::endl;
	std::cout << "Parent - CL4P-TP parent character created, but without a name.\n" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string Name) : _name(Name)
{
	std::cout << "Parent - CL4P-TP constructor called." << std::endl;
	std::cout << "Parent - CL4P-TP character " << this->_name << " was created. It would be appropiated to get scared now. \n" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Parent - CL4P-TP >> " << this->_name << " died. Don't cry.\n" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Parent - CL4P-TP Copy constructor called." << std::endl;
	*this = src;
	std::cout << "[" << this->_name << "] has been copied. Good luck with this BOSS.\n" << std::endl;
	return;
}

ClapTrap&		ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Operator called." << std::endl;
	
	this->_hitPoints = other._hitPoints;
	this->_maxHitPoints = other._maxHitPoints;
	this->_energyPoints = other._energyPoints;
	this->_maxEnergyPoints = other._maxEnergyPoints;
	this->_level = other._level;
	this->_name = other._name;
	this->_meleeAttackDamage = other._meleeAttackDamage;
	this->_rangedAttackDamage = other._rangedAttackDamage;
	this->_armorDamageReduction = other._armorDamageReduction;
	std::cout << "[" << _name << "] transfered.\n" << std::endl;
	return *this;
}
	
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << _name << " is not alive so nothing has been done.\n" << std::endl;
		return;
	}
	std::cout << _name << " is being attacked at this very moment." << std::endl;
	if (amount <= _armorDamageReduction)
	{
		std::cout << _name << " deflected the attack. Better luck next time.\n" << std::endl;
		return;
	}
	amount -= _armorDamageReduction;
	this->_hitPoints -= amount;
	if(this->_hitPoints < 0)
	{
		this->_hitPoints = 0;
		std::cout << _name << " has DIED. OMG call your mama.\n" << std::endl;
		return;
	}
	std::cout << _name << " has taken [" << amount << "] damage.\n" << _name << " has ["<< _hitPoints << "] Hit Points left.\n" << std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << _name << " has been repaired for: [" << amount << "]. " << _name << " has [" << _hitPoints << "] Hit Points left.\n" << std::endl;
	return;
}

void	ClapTrap::re_energize(unsigned int amount)
{
	this->_energyPoints += amount;
	if (this->_energyPoints > this->_maxEnergyPoints)
		this->_energyPoints = this->_maxEnergyPoints;
	std::cout << _name << " has been re-energize for: [" << amount << "]. " << _name << "] has [" << _energyPoints << "] Energy Points left.\n" << std::endl;
	return;
}

void	ClapTrap::setName(std::string const &Name)
{
	_name = Name;
}

const std::string ClapTrap::getName(void) const
{
	return this->_name;
}
