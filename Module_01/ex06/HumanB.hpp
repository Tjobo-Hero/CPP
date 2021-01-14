/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 11:32:29 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 12:34:41 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:

	std::string	_name;
	Weapon*		_bWeapon;
	
public:

	HumanB(void);
	HumanB(std::string Name);
	~HumanB(void);
	
	void	attack(void);
	void	setWeapon(Weapon&);
	
};
#endif
