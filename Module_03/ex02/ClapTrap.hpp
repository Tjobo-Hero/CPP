/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 12:30:22 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/28 15:14:41 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	
protected:

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
	
	ClapTrap(void);
	ClapTrap(std::string Name);
	ClapTrap(ClapTrap const &src);
	virtual ~ClapTrap(void);

	ClapTrap&			operator=(ClapTrap const &other);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				re_energize(unsigned int amount);
	void				setName(std::string const &Name);
	const std::string 	getName(void) const;
};

#endif
