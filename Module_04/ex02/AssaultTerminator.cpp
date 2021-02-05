/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:41 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 12:20:55 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	std::cout << "Copy constructor used." << std::endl;
	*this = src;
	return;
}

AssaultTerminator&		AssaultTerminator::operator=(AssaultTerminator const &obj)
{
	if(this != &obj)
		std::cout << "Nothing to do here." << std::endl;
	return *this;
	
}

AssaultTerminator*		AssaultTerminator::clone(void) const
{
	std::cout << "cloning Assault Terminator..." << std::endl;
	return new AssaultTerminator(*this);
}

void				AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return;
}

void				AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
	return;
}

void				AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return;
}
