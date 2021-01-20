/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 12:56:52 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/20 10:38:53 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

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
