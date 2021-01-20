/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 12:56:49 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/19 11:11:20 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	return;
}

ZombieEvent::~ZombieEvent()
{
	return;
}

void		ZombieEvent::setZombieType(std::string Type)
{
	_type = Type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie1 = new(std::nothrow) Zombie(name, _type); 
	if (zombie1 == NULL)
	{
     	std::cerr << "Bad_alloc detected" << std::endl; 
  		exit(EXIT_FAILURE); 
	}

	return (zombie1);
}

Zombie*		ZombieEvent::randomChump()
{
	int			randomIndex;
	std::string	name;
	
	std::string nameRandom[] = {"MeSoRandom", "RandomZombieMe", "TheRandomizer", "Randizimo", "RandomRandom", "Rando"};
	randomIndex = rand() % 6;
	name = nameRandom[randomIndex];
	Zombie *Zombie1 = newZombie(name);
	Zombie1->announce();
	return Zombie1;
}
