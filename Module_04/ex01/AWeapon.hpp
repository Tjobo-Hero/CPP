/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:44:55 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/28 11:00:07 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
	private:

		AWeapon(void);
		
	protected:
	
		std::string _name;
		int			_apcost;
		int			_damage;
		
	public:

		virtual ~AWeapon(void);
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &src);
		AWeapon&		operator=(AWeapon const &obj);
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		virtual void	attack(void) const = 0;
};

#endif

