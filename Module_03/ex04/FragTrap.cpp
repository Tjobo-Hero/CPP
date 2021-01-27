/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:08:13 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 12:32:29 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default FR4G-TP constructor called." << std::endl;
	std::cout << "FR4G-TP character created but you character has no name yet.\n" << std::endl;
	_hitPoints = 100; 
	_maxHitPoints = 100; 
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	return;
}

FragTrap::FragTrap(std::string Name)
{
	std::cout << "Name FR4G-TP constructor called." << std::endl;
	_hitPoints = 100; 
	_maxHitPoints = 100; 
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	this->setName("FR4G-TP [" + Name + "]");
	std::cout << this->getName() << " character was created. Good Job.\nI knew you could do it.\n" << std::endl;
	return;
}

FragTrap::~FragTrap (void)
{
	std::cout << this->getName() << " died. Don't cry." << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	std::cout  << this->getName() << " has been copied. Good luck with your clone.\n" << std::endl;
	return;
}

FragTrap&		FragTrap::operator=(FragTrap const &other)
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
		std::cout << this->_name << " transfered.\n" << std::endl;
	}
	return *this;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->getName() << " is not alive so nothing has been done.\n" << std::endl;
		return;
	}
	std::cout << this->getName() << " attacks [" << target << "] at range, causing [" << this->_rangedAttackDamage << "] points of damage!\n" << std::endl;
	return;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->getName() << " is not alive so nothing has been done.\n" << std::endl;
		return;
	}
	std::cout << this->getName() << " attacks [" << target << "] with melee, causing [" << this->_meleeAttackDamage << "] points of damage!\n" << std::endl;
	return;
}

typedef void (FragTrap::*functionPtr)(std::string const &target); 

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int randomNum;

	if (_hitPoints == 0)
	{
		std::cout << this->getName() << " is not alive so nothing has been done.\n" << std::endl;
		return;
	}
	if (this->_energyPoints < 25)
	{
		std::cout << this->getName() << " has not enough energy to call this attack. Boohooooo." << std::endl;
		std::cout << "You can regenerate some of your character by using the re-energize command.\n" << std::endl;
		return;
	}
	randomNum = rand() % 5;
	functionPtr functions[] = {&FragTrap::ancientMonkeyBouncingAttack, &FragTrap::parasticFogAriseAttack, &FragTrap::acidicRainAttack, &FragTrap::monsoonMurdererCallsTornadoAttack, &FragTrap::summonDarknessAttack};
	(this->*functions[randomNum])(target);
	this->_energyPoints -= 25;
	std::cout << "This special attack has cost [25] of Energy Points [" << this->getName() << "] now has Energy Points: [" << _energyPoints << "] left.\n" << std::endl;
	return;
}

void				FragTrap::ancientMonkeyBouncingAttack(std::string const &target)
{
	std::cout << "The Jungle Demon Wakili hears your call. He attacks [" << target << "] with his coconut bazooka and does [55] damage." << std::endl;
	return;
}

void				FragTrap::parasticFogAriseAttack(std::string const &target)
{
	std::cout << "[" << target << "] finds himherself surrounded by creepy Fog. [" << target << "] freezes up as the Fog starts to tear away the flesh. Damage is inevitable, [40]." << std::endl;
	return;
}

void				FragTrap::acidicRainAttack(std::string const &target)
{
	std::cout << "Clouds form above [" << target << "] head. The illustrious yellow/green color hints of danger. Acid pours down and [" << target << "] suffer 20 damage." << std::endl;
	return;
}

void				FragTrap::monsoonMurdererCallsTornadoAttack(std::string const &target)
{
	std::cout << "The power of the biggest of Monsoons combined with the most vicious Tornados winds brings down hell on [" << target << "] the damage is irrivisible [70]." << std::endl;
	return;
}

void				FragTrap::summonDarknessAttack(std::string const &target)
{
	std::cout << "You summon darkness of an ancient shining rock. [" << target << "] suffors while an evil spirit takes of the brian. The damage is a shocking 100!" << std::endl;
	return;
}

unsigned int		FragTrap::getHitpoints(void)
{
	return _hitPoints;
}
unsigned int		FragTrap::getMaxHitpoints(void)
{
	return _maxHitPoints;
}
unsigned int		FragTrap::getRangedAttackDamage(void)
{
	return _rangedAttackDamage;
}
unsigned int		FragTrap::getArmorDamageReduction(void)
{
	return _armorDamageReduction;
}