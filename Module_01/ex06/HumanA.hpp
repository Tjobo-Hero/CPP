/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 11:32:25 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 12:36:23 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:

	std::string	_name;
	Weapon&		_aWeapon;
	
public:

	HumanA(std::string Name, Weapon& Weapon);
	~HumanA(void);
	
	void	attack(void);
	
};
#endif
