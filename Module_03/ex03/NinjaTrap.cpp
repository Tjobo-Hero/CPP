/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 15:46:39 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 12:30:59 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "Default constructor called." << std::endl;
	std::cout << "NINJ4-TP character created but is has no name yet.\n" << std::endl;
	_hitPoints = 60; 
	_maxHitPoints = 60; 
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	return;
}

NinjaTrap::NinjaTrap(std::string Name)
{
	std::cout << "Name constructor called." << std::endl;
	_hitPoints = 60; 
	_maxHitPoints = 60; 
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	this->setName("NINJ4-TP [" + Name + "]");
	std::cout << this->getName() << " was created. Good luck on your journey.\nDo a little dance or the CHA-CHA.....\n" << std::endl;
	return;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << this->getName() << " died with honor. And will be added to the Ninja Wall of Fame." << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	std::cout << this->_name << " is done with Ninja training and has been doubled.\n" << std::endl;
	return;
}

NinjaTrap&		NinjaTrap::operator=(NinjaTrap const &other)
{
	std::cout << "Operator called." << std::endl;
	if(this != &other)
	{
		this->_hitPoints = other._hitPoints;
		this->_maxHitPoints = other._maxHitPoints;
		this->_energyPoints = other._energyPoints;
		this->_maxEnergyPoints = other._maxEnergyPoints;
		this->_level = other._level;
		this->_name = other._name;
		this->_meleeAttackDamage = other._meleeAttackDamage;
		this->_rangedAttackDamage = other._rangedAttackDamage;
		this->_armorDamageReduction = other._armorDamageReduction;
		std::cout << _name << " transfered.\n" << std::endl;
	}
	return *this;
}

void	NinjaTrap::rangedAttack(std::string const &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->getName() << " is weak and doesn't have enough strength to perform Ninja duties. Please get yourself repaired.\n" << std::endl;
		return;
	}
	std::cout << this->getName() << " attacks [" << target << "] with his strademark Ninja stars. Resulting in [" << this->_rangedAttackDamage << "] points of damage!\n" << std::endl;
	return;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->getName() << " is weak and doesn't have enough strength to perform Ninja duties. Please get yourself repaired.\n" << std::endl;
		return;
	}
	std::cout << this->getName() << " attacks [" << target << "] with his ninja sword, doing [" << this->_meleeAttackDamage << "] points of damage!\n" << std::endl;
	return;
}

void				NinjaTrap::ninjaShoebox(ClapTrap& target)
{
	std::cout << this->getName() << " jumps down from a roof and attacks " << target.getName() << " with a Ninja stars. The attack is worth [40] damage." << std::endl;
	target.takeDamage(40);
	return;
}

void				NinjaTrap::ninjaShoebox(FragTrap& target)
{
	std::cout << this->getName() << " hides behind a door when " << target.getName() << " enters. Without a sound a knife cuts trough" << target.getName() << " spine. Attack is is worth [50] damage" << std::endl;;
	target.takeDamage(50);
	return;
}

void				NinjaTrap::ninjaShoebox(ScavTrap& target)
{
	std::cout << target.getName() << ", this litter defender is no match for " << this->getName() << " finnesse. Two swift blow and [10] damage has been done in the blink of an eye." << std::endl;
	target.takeDamage(10);
	return;
}			
	
void				NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
	std::cout << this->getName() << " has broken the Ninja vows and will be punished with [25] damage." << std::endl; 
	target.takeDamage(25);
	return;
}