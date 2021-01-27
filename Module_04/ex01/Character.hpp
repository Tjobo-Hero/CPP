/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:00 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 15:35:25 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include <AWeapon.hpp>

class Character
{
	private:

		std::string		_name;
		int				_actionPoints;
		int				_recoverAP = 10;
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