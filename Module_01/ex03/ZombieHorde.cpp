/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 15:09:16 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/19 10:02:51 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _index(N)
{
	if (N < 0)
	{
		std::cout << "You cheecky bastard, I'm happy you tried but the N integer must be a positive number." << std::endl;
		exit(EXIT_FAILURE);
	}
	try
  	{ 
     	_allZombies = new Zombie[_index]; 
  	} 
  	catch (std::bad_alloc & exception) 
  	{ 
     	std::cerr << "Bad_alloc detected: " << exception.what() << std::endl; 
  		exit(EXIT_FAILURE); 
  	} 

	for(int i = 0; i < N; i++)
	{
		this->_allZombies[i].changeType();
		this->_allZombies[i].randomChump();
	}
	return;
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "Destructor called" << std::endl;
	delete [] _allZombies;
	return;
}

void	ZombieHorde::announce(void) const
{
	for(int i = 0; i < _index; i++)
		_allZombies[i].announce();
	return;
}

