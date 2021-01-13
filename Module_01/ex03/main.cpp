/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 15:09:05 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/13 11:46:43 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main (void)
{
	srand ( time(NULL) );
	ZombieHorde zombieTeam = ZombieHorde(6);
	
	zombieTeam.announce();
	return(0);
}