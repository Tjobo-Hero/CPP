/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AngryDuck.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 13:25:23 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/02 13:27:15 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "AngryDuck.hpp"

AngryDuck::AngryDuck(void)
{
	std::cout << "Angry Duck ready for battle!" << std::endl;
	return;
}

AngryDuck::~AngryDuck(void)
{
	std::cout << "Quack quack, dead." << std::endl;
	return;
}

AngryDuck::AngryDuck(AngryDuck const &src)
{
	std::cout << "Copy constructor used." << std::endl;
	*this = src;
	return;
}

AngryDuck&		AngryDuck::operator=(AngryDuck const &obj)
{
	if(this != &obj)
		std::cout << "Nothing to do here." << std::endl;
	return *this;
	
}

AngryDuck*		AngryDuck::clone(void) const
{
	std::cout << "cloning Angry Duck..." << std::endl;
	return new AngryDuck;
}

void				AngryDuck::battleCry(void) const
{
	std::cout << "Boom Quack Boom Quack!" << std::endl;
	return;
}

void				AngryDuck::rangedAttack(void) const
{
	std::cout << "* attacks with fierce beak *" << std::endl;
	return;
}

void				AngryDuck::meleeAttack(void) const
{
	std::cout << "* attacks with flappy wings *" << std::endl;
	return;
}
