/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 09:53:13 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 12:33:23 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	std::cout << "Default S4PER-TP constructor called." << std::endl;
	std::cout << "S4PER-TP character created but you character has no name yet.\n" << std::endl;
	_hitPoints = getHitpoints(); // Fragtrap
	_maxHitPoints = getMaxHitpoints(); // FragTrap 
	_energyPoints = getEnergyPoints(); // NinjaTrap
	_maxEnergyPoints = getMaxEnergyPoints(); // NinjaTrap
	_level = 1;
	_meleeAttackDamage = getMeleeAttackDamage(); // NinjaTrap
	_rangedAttackDamage = getRangedAttackDamage(); // Fragtrap
	_armorDamageReduction = getArmorDamageReduction(); // Fragtrap
	return;
}

SuperTrap::SuperTrap(std::string Name)
{
	std::cout << "Name S4PER-TP constructor called." << std::endl;
	_hitPoints = getHitpoints(); // Fragtrap
	_maxHitPoints = getMaxHitpoints(); // FragTrap 
	_energyPoints = getEnergyPoints(); // NinjaTrap
	_maxEnergyPoints = getMaxEnergyPoints(); // NinjaTrap
	_level = 1;
	_meleeAttackDamage = getMeleeAttackDamage(); // NinjaTrap
	_rangedAttackDamage = getRangedAttackDamage(); // Fragtrap
	_armorDamageReduction = getArmorDamageReduction(); // Fragtrap
	this->setName("S4PER-TP [" + Name + "]");
	std::cout << this->getName() << " character was created. Everyone should be scared.\n" << std::endl;
	return;
}

SuperTrap::~SuperTrap (void)
{
	std::cout << this->getName() << " died. Super not nice." << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	std::cout  << this->getName() << " has been copied. S4PER-TP ready to go.\n" << std::endl;
	return;
}

SuperTrap&		SuperTrap::operator=(SuperTrap const &other)
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

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
	return;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
	return;
}

void	SuperTrap::printValues(void) const
{
	std::cout << "S4PERTRAP INHERITANCE CHECK\n" << std::endl;
	std::cout << "S4PER-TP HITPOINTS:              [" << this->_hitPoints << "]   FR4G-TP HITPOINTS:     [100]" << std::endl;
	std::cout << "S4PER-TP MAX HITPOINTS:          [" << this->_maxHitPoints << "]   FR4G-TP MAX HITPOINTS: [100]" << std::endl;
	std::cout << "S4PER-TP ENERGYPOINTS:           [" << this->_energyPoints << "]   NINJ4-TP ENERGYPOINTS: [120]" << std::endl;
	std::cout << "S4PER-TP MAX ENERGYPOINTS:       [" << this->_maxEnergyPoints << "]   NINJ4-TP:              [120]" << std::endl;
	std::cout << "S4PER-TP MELEE ATTACK DAMAGE:    [" << this->_meleeAttackDamage << "]    NINJ4-TP:              [60] " << std::endl;
	std::cout << "S4PER-TP RANGED ATTACK DAMAGE:   [" << this->_rangedAttackDamage << "]    FR4G-TP:               [20]" << std::endl;
	std::cout << "S4PER-TP ARMOR DAMAGE REDUCTION: [" << this->_armorDamageReduction << "]     FR4G-TP:               [5]\n" << std::endl;
	
	return;
}

