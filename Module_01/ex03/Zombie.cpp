/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 15:09:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/13 11:36:10 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return;
}

Zombie::Zombie(std::string Name, std::string Type) : _name(Name), _type(Type)
{
	return;
}

Zombie::~Zombie()
{
	return ;
}

void	Zombie::announce()
{
	std::cout << "<" << _name << " (" << _type << ")" << ">" << " Braiiiiiiinnnssss..." << std::endl;
}

void		Zombie::changeType(void)
{
	int			randomIndex;
	std::string	Type;
	
	std::string typeRandom[] = {"Deadly", "Brainiac", "Slayer", "Zombiemania", "Livinddead", "CRAZZZZY"};
	randomIndex = rand() % 6;
	this->_type = typeRandom[randomIndex];
	return;
}

void		Zombie::randomChump(void)
{
	int			randomIndex;
	std::string	name;
	
	std::string nameRandom[] = {"MeSoRandom", "RandomZombieMe", "TheRandomizer", "Randizimo", "RandomRandom", "Rando"};
	randomIndex = rand() % 6;
	this->_name = nameRandom[randomIndex];
	return;
}