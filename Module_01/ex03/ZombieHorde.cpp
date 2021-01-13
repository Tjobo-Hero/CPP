/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 15:09:16 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/13 11:38:13 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _index(N)
{
	_allZombies = new Zombie[_index];

	for(int i = 0; i < N; i++)
	{
		this->_allZombies[i].changeType();
		this->_allZombies[i].randomChump();
	}
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "Destructor called" << std::endl;
	delete [] _allZombies;
}

void	ZombieHorde::announce(void) const
{
	for(int i = 0; i < _index; i++)
		_allZombies[i].announce();
}

