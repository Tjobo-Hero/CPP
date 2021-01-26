/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:06:55 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/26 14:26:55 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Prey.hpp"

int		main(void)
{
	Sorcerer 	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon 		joe("Joe");
	Prey		tim("Tim");
	
	std::cout << robert << jim << joe << tim;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(tim);
	tim.introduce();
	joe.introduce();

	return(0);
}