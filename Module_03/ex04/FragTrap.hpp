/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:08:16 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/22 10:35:38 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	
public:

	FragTrap(void);
	FragTrap(std::string Name);
	FragTrap(FragTrap const &src);
	virtual ~FragTrap(void);

	FragTrap&			operator=(FragTrap const &other);
	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				vaulthunter_dot_exe(std::string const &target);
	void				ancientMonkeyBouncingAttack(std::string const &target);
	void				parasticFogAriseAttack(std::string const &target);
	void				acidicRainAttack(std::string const &target);
	void				monsoonMurdererCallsTornadoAttack(std::string const &target);
	void				summonDarknessAttack(std::string const &target);
	unsigned int		getHitpoints(void);
	unsigned int		getMaxHitpoints(void);
	unsigned int		getRangedAttackDamage(void);
	unsigned int		getArmorDamageReduction(void);
};



#endif
