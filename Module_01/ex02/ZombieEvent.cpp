/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 12:56:49 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 14:46:52 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

void		ZombieEvent::setZombieType(std::string Type)
{
	_type = Type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, _type));
}

Zombie*		ZombieEvent::randomChump()
{
	int			randomIndex;
	std::string	name;
	
	srand ( time(NULL) );
	std::string nameRandom[] = {"MeSoRandom", "RandomZombieMe", "TheRandomizer", "Randizimo", "RandomRandom", "Rando"};
	randomIndex = rand() % 6;
	name = nameRandom[randomIndex];
	return (new Zombie(name, _type));
}