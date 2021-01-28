/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:50 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/28 13:21:33 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include 

int			main(void)
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AsssaultTerminator;

	ISquad *vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);

	for(in i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	return (0);
}