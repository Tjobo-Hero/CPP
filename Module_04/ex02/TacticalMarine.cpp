/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:57 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/02 13:24:42 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	std::cout << "Copy constructor used." << std::endl;
	*this = src;
	return;
}

TacticalMarine&		TacticalMarine::operator=(TacticalMarine const &obj)
{
	if(this != &obj)
		std::cout << "Nothing to do here." << std::endl;
	return *this;
	
}

TacticalMarine*		TacticalMarine::clone(void) const
{
	std::cout << "cloning Tactical Marine..." << std::endl;
	return new TacticalMarine;
}

void				TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return;
}

void				TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return;
}

void				TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return;
}
