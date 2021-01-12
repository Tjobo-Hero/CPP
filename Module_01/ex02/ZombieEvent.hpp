/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 12:56:52 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 14:44:15 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEEVENT_HPP_
# define _ZOMBIEEVENT_HPP_

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _type;
	
public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string Type);
	Zombie* newZombie(std::string name);
	Zombie*	randomChump();
};
#endif
