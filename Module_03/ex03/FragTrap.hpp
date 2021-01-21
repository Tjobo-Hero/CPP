/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:08:16 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/21 16:41:53 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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
};



#endif
