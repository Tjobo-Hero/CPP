/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:07:57 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/21 15:33:37 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor called." << std::endl;
	std::cout << "SC4V-TP character created but is has no name yet.\n" << std::endl;
	_hitPoints = 100; 
	_maxHitPoints = 100; 
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	return;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "Name constructor called." << std::endl;
	_hitPoints = 100; 
	_maxHitPoints = 100; 
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	this->setName("SC4V-TP [" + Name + "]");
	std::cout << this->getName() << " was created. Good luck on your journey.\nDo a little dance or the CHA-CHA.....\n" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->getName() << " did not survive. It will not be remembered.\n" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	std::cout << this->_name << " has been screened and copied. Enjoy this simbiosis you share.\n" << std::endl;
	return;
}

ScavTrap&		ScavTrap::operator=(ScavTrap const &other)
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
	std::cout << _name << " transfered.\n" << std::endl;
	return *this;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->getName() << " has not enough Hit Points. Please get yourself repaired.\n" << std::endl;
		return;
	}
	std::cout << this->getName() << " attacks [" << target << "] from far away. Resulting in [" << this->_rangedAttackDamage << "] points of damage! Oh Yeah!\n" << std::endl;
	return;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->getName() << " has not enough Hit Points. Please get yourself repaired.\n" << std::endl;
		return;
	}
	std::cout << this->getName() << " attacks [" << target << "] from up close, doing [" << this->_meleeAttackDamage << "] points of damage!\n" << std::endl;
	return;
}

typedef void (ScavTrap::*functionPtr)(std::string const &target); 

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int randomNum;

	if (_hitPoints == 0)
	{
		std::cout << this->getName() << " has not enough Hit Points. Please get yourself repaired.\n" << std::endl;
		return;
	}
	if (this->_energyPoints < 25)
	{
		std::cout << this->getName() << " has insufficient energy level. Please come back when you have more energy. Tip: use the re_energize function.\n" << std::endl;
		return;
	}
	randomNum = rand() % 5;
	functionPtr functions[] = {&ScavTrap::iceBucketChallenge, &ScavTrap::longestHulaHoopOnATrampolineSomersaultingChallenge, &ScavTrap::chopstickAndGreasyBeanChallenge, &ScavTrap::hotPepperChallenge, &ScavTrap::noMirrorMakeupChallenge};
	(this->*functions[randomNum])(target);
	this->_energyPoints -= 25;
	std::cout << this->getName() << " used [25] Energy Points for the special attack. Energy Points: [" << _energyPoints << "] left.\n" << std::endl;
	return;
}

void				ScavTrap::iceBucketChallenge(std::string const &target)
{
	std::cout << "[" << target << "] stares down on the big bucket between his/her hands. Filled with the coldest ice water on earth. He or she must empty it above his or her head. Or else [" << target << "] will suffer [30] points of damage." << std::endl;
	return;
}

void				ScavTrap::longestHulaHoopOnATrampolineSomersaultingChallenge(std::string const &target)
{
	std::cout << "[" << target << "] is cursed with the hardest challenge kwown to ClapTrap kind. Hula Hooping on a Trampoline whilst Somersaulting trough it. The aim is to beat the record of 101 and times. Or else [40] damage will be done." << std::endl;
	return;
}

void				ScavTrap::chopstickAndGreasyBeanChallenge(std::string const &target)
{
	std::cout << "Chopsticks are ideal for eating most dishes. But [" << target << "] is confronted with the challenge to eat at least 40 greasy beans in one minute. If [" << target << "] fails the damage wille be [15]." << std::endl;
	return;
}

void				ScavTrap::hotPepperChallenge(std::string const &target)
{
	std::cout << "Regular supermarket peppers are in no way close the hotest pepper on earth. While the averge pepper rates 8000 on the Scoville scale. [" << target << "] is prompted with the challange to take a bite (and survive) from a 'Carolina Reaper', Scoville rating: 2,200.000. In case of puking.\n[40] damage is suffered." << std::endl;
	return;
}

void				ScavTrap::noMirrorMakeupChallenge(std::string const &target)
{
	std::cout << "Looking your best sometimes takes a lot of work. [" << target << "] needs to put on make up without looking like a freak. In case of fainting/screaming people. The damage will be [10] points." << std::endl;
	return;
}