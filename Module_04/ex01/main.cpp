/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 11:00:32 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "CruelCumber.hpp"
#include "Enemy.hpp"
#include "NoisyCricket.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int			main(void)
{
	Character *me = new Character("[ME]");
	std::cout << *me;
	
	Enemy *RS = new RadScorpion();
	Enemy *CC = new CruelCumber();
	Enemy *SM = new SuperMutant();
	
	AWeapon *PR = new PlasmaRifle();
	AWeapon *PF = new PowerFist();
	AWeapon	*NC = new NoisyCricket();
	
	std::cout << "\nEdge cases:" << std::endl;
	me->attack(NULL);
	me->equip(NULL);
	std::cout << "Done\n" << std::endl;

	me->equip(PR);
	std::cout << *me;
	me->equip(PF);
	std::cout << *me;

	me->attack(RS);
	std::cout << *me;
	me->equip(PR);
	std::cout << *me;
	me->attack(SM);
	std::cout << *me;
	me->equip(NC);
	std::cout << *me;
	me->attack(CC);
	std::cout << *me;
	me->attack(SM);
	me->attack(RS);

	
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;

	me->attack(CC);
	me->attack(CC);
	me->attack(CC);
	
	delete me;
	delete SM;
	delete PR;
	delete PF;
	delete NC;
	delete RS;

	std::cout << "\n\n[Leaks check, see below]\n" << std::endl;
	system("leaks a.out");
	return (0);
}