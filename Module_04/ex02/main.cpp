/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:50 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 14:42:36 by timvancitte   ########   odam.nl         */
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
	{
		ISpaceMarine *jim = new AssaultTerminator;
		ISpaceMarine *bob = new AssaultTerminator;
		ISpaceMarine *jona = new AssaultTerminator;
		ISpaceMarine *bart = new AssaultTerminator;

		ISpaceMarine *tim = bart;

		Squad *s1 = new Squad;

		s1->push(bob);
		s1->push(jim);
		s1->push(jona);
		s1->push(NULL);
		s1->push(jona);
		s1->push(tim);

		std::cout << "\nSQUAD 1" << std::endl;
		for(int i = 0; i < s1->getCount(); i++)
		{
			ISpaceMarine* cur = s1->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
	
		std::cout << "\n-----------COPY CONSTRUCTOR-----------\n" << std::endl;

		Squad *s2 = new Squad(*s1);

		std::cout << "\nSQUAD 2" << std::endl;
		
		for(int i = 0; i < s2->getCount(); i++)
		{
			ISpaceMarine* cur = s2->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete s1;
		delete s2;
	}
	{
		std::cout << "\n-----------ASSIGNATION-------------\n " << std::endl;

		ISpaceMarine *mister = new AngryDuck;
		ISpaceMarine *sister = new AssaultTerminator;
		ISpaceMarine *mom = new TacticalMarine;
		ISpaceMarine *hoi = new AngryDuck;
		ISpaceMarine *tim = new AssaultTerminator;
		ISpaceMarine *jan = new TacticalMarine;
		
		Squad *s3 = new Squad;

		s3->push(mister);
		s3->push(sister);
		s3->push(mom);
		s3->push(hoi);
	
		std::cout << "\nSQUAD 3" << std::endl;
		for(int i = 0; i < s3->getCount(); i++)
		{
			ISpaceMarine* cur = s3->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		
		Squad *s4 = new Squad;

		s4->push(tim);
		s4->push(jan);

		std::cout << "\nSQUAD 4" << std::endl;
		
		for(int i = 0; i < s4->getCount(); i++)
		{
			ISpaceMarine* cur = s4->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		
		std::cout << "\nAssignation initiate" << std::endl;

		*s4 = *s3;

		std::cout << "Assignation done" << std::endl;
		
		std::cout << "\nSQUAD 4" << std::endl;
		
		for(int i = 0; i < s4->getCount(); i++)
		{
			ISpaceMarine* cur = s4->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		
		std::cout << "\n\n-----GET UNIT----\n" << std::endl;
		ISpaceMarine *spy; 
		spy = s4->getUnit(2);
		if(spy)
			spy->battleCry();
		spy = s4->getUnit(1);
		if(spy)
			spy->battleCry();
		std::cout << "\n";
		
		std::cout << "\n---Delete---\n" << std::endl;
 		delete s3; 
		delete s4;
		std::cout << "\n----LEAKS---\n\n" << std::endl;
		system("leaks a.out");
	}
	return (0);
}
