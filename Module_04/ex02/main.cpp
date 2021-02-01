/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:50 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/01 16:02:55 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

int			main(void)
{
	ISpaceMarine *jim = new AssaultTerminator;
	ISpaceMarine *jona = new AssaultTerminator;
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *harry = new TacticalMarine;
	
	ISpaceMarine *mister = new TacticalMarine;
	ISpaceMarine *sister = new TacticalMarine;
	ISpaceMarine *mom = new TacticalMarine;
	ISpaceMarine *dad = new TacticalMarine;

	ISquad *s1 = new Squad;
	ISquad *s2 = new Squad;

	s1->push(bob);
	s1->push(jim);
	s1->push(harry);
	s1->push(jona);
	s1->push(NULL);
	s1->push(jona);

	s2->push(mister);
	s2->push(sister);
	s2->push(mom);
	s2->push(dad);	

	std::cout << "\nSQUAD 1" << std::endl;
	for(int i = 0; i < s1->getCount(); i++)
	{
		ISpaceMarine* cur = s1->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	ISpaceMarine *random = s1->getUnit(0);
	random->battleCry();

	std::cout << "\nSQUAD 2" << std::endl;
	
	for(int i = 0; i < s2->getCount(); i++)
	{
		ISpaceMarine* cur = s2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\nCOPYING SQUAD1 INTO SQUAD 2" << std::endl;
	s2 = s1;
	
	for(int i = 0; i < s2->getCount(); i++)
	{
		ISpaceMarine* cur = s2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete s1;
	delete s2;

	return (0);
}