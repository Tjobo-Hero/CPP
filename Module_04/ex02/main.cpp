/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:50 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/02 13:33:56 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "AngryDuck.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

int			main(void)
{
	ISpaceMarine *jim = new AssaultTerminator;
	ISpaceMarine *jona = new AssaultTerminator;
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *harry = new TacticalMarine;
	ISpaceMarine *donald = new AngryDuck;
	ISpaceMarine *dagobert = new AngryDuck;
	
	
	
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
	s1->push(donald);
	
	ISquad *s3(s1);
	
	s2->push(mister);
	s2->push(sister);
	s2->push(mom);
	s2->push(dad);
	s2->push(dad);
	s2->push(dagobert);

	std::cout << "\nSQUAD 1" << std::endl;
	for(int i = 0; i < s1->getCount(); i++)
	{
		ISpaceMarine* cur = s1->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "\nSQUAD 2" << std::endl;
	
	for(int i = 0; i < s2->getCount(); i++)
	{
		ISpaceMarine* cur = s2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "\nSQUAD 3" << std::endl;
	
	for(int i = 0; i < s3->getCount(); i++)
	{
		ISpaceMarine* cur = s3->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	
	std::cout << "\nCOPYING SQUAD1 INTO SQUAD 2\n" << std::endl;
	*s2 = *s1;
	std::cout << "\nDONE COPYING SQUAD1 INTO SQUAD 2\n" << std::endl;
	std::cout << "\nSQUAD 2" << std::endl;
	for(int i = 0; i < s2->getCount(); i++)
	{
		ISpaceMarine* cur = s2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\n\n>>>>>>DESTRUCTOR<<<<<<<" << std::endl;
	delete s1; 
	delete s2;
	std::cout << "\n\n" << std::endl;
	system("leaks a.out");
	return (0);
}
