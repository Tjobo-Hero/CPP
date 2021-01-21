/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:08:00 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/21 10:55:32 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "FragTrap.hpp"

class ScavTrap
{
	
private:

	unsigned int		_hitPoints;
	unsigned int		_maxHitPoints;
	unsigned int		_energyPoints;
	unsigned int		_maxEnergyPoints;
	unsigned int		_level;
	std::string			_name;
	unsigned int		_meleeAttackDamage;
	unsigned int		_rangedAttackDamage;
	unsigned int		_armorDamageReduction;

public:

	ScavTrap(void);
	ScavTrap(std::string Name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);

	ScavTrap&			operator=(ScavTrap const &other);
	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				re_energize(unsigned int amount);
	void				challengeNewcomer(std::string const &target);
	void				iceBucketChallenge(std::string const &target);
	void				longestHulaHoopOnATrampolineSomersaultingChallenge(std::string const &target);
	void				chopstickAndGreasyBeanChallenge(std::string const &target);
	void				hotPepperChallenge(std::string const &target);
	void				noMirrorMakeupChallenge(std::string const &target);
};

#endif