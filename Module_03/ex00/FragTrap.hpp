/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:08:16 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/19 15:49:54 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
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

	FragTrap(void);
	FragTrap(std::string Name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);

	FragTrap&			operator=(FragTrap const &other);
	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				re_energize(unsigned int amount);
	void				vaulthunter_dot_exe(std::string const &target);
	void				ancientMonkeyBouncingAttack(std::string const &target);
	void				parasticFogAriseAttack(std::string const &target);
	void				acidicRainAttack(std::string const &target);
	void				monsoonMurdererCallsTornadoAttack(std::string const &target);
	void				summonDarknessAttack(std::string const &target);

};



#endif
