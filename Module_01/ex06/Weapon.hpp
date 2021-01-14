/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 11:32:37 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 12:35:55 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:

	std::string	_type;

public:

	Weapon(void);
	Weapon(std::string Type);
	~Weapon(void);

	std::string const&	getType(void) const;
	void				setType(std::string Type);

};

#endif