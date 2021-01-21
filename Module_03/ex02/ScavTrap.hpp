/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:08:00 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/21 14:53:41 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	
public:

	ScavTrap(void);
	ScavTrap(std::string Name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);

	ScavTrap&			operator=(ScavTrap const &other);
	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				challengeNewcomer(std::string const &target);
	void				iceBucketChallenge(std::string const &target);
	void				longestHulaHoopOnATrampolineSomersaultingChallenge(std::string const &target);
	void				chopstickAndGreasyBeanChallenge(std::string const &target);
	void				hotPepperChallenge(std::string const &target);
	void				noMirrorMakeupChallenge(std::string const &target);
};

#endif