/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 15:46:35 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/21 16:42:02 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	
public:

	NinjaTrap(void);
	NinjaTrap(std::string Name);
	NinjaTrap(NinjaTrap const &src);
	virtual ~NinjaTrap(void);

	NinjaTrap&			operator=(NinjaTrap const &other);
	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				ninjaShoebox(ClapTrap& target);
	void				ninjaShoebox(FragTrap& target);
	void				ninjaShoebox(ScavTrap& target);				
	void				ninjaShoebox(NinjaTrap& target);
};

#endif