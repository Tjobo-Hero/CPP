/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:00 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/28 11:02:31 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:

		std::string		_name;
		int				_actionPoints;
		AWeapon*		_weaponPtr;
		Character(void);
		
	public:
	
		Character(std::string const &name);
		Character(Character const &src);
		~Character(void);
		Character&		operator=(Character const &obj);
		void			recoverAP(void);
		void			equip(AWeapon *weapon);
		void			attack(Enemy *enemy);
		std::string		getName(void) const;
		int				getActionPoints(void) const;
		AWeapon*		getWeapon(void) const;
};

std::ostream&		operator<<(std::ostream &o, Character const &character);

#endif