/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 12:56:47 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 14:51:45 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie		zombie("Hellraiser", "Hybrid");
	ZombieEvent crawling;
	ZombieEvent running;
	ZombieEvent dead;
	
	std::cout << "----Zombie----" << std::endl;
	zombie.announce();
	
	std::cout << "\n----Zombie Event----" << std::endl;
	running.setZombieType("Running");
	crawling.setZombieType("Crawling");
	dead.setZombieType("Dead");
	Zombie*		Grimmer = running.newZombie("Grimmer");
	Zombie*		Horror = crawling.newZombie("Horror");
	Zombie*		McBrains = dead.newZombie("McBrains");
	Grimmer->announce();
	Horror->announce();
	McBrains->announce();
	
	std::cout << "\n----Random Zombie----" << std::endl;	

	Zombie* Random = dead.randomChump();
	Random->announce();
	delete Grimmer;
	delete Horror;
	delete McBrains;
	delete Random;

	return(0);
}
