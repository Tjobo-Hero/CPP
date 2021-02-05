/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:06:55 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 12:11:35 by timvancitte   ########   odam.nl         */
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
	Prey		tim2(tim);
	Prey		tim3("Not Tim");
	
	std::cout << robert << jim << joe << tim;

	std::cout << "\nPOLYMORPHING VICTIMS:\n";
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(tim);
	std::cout << "\nINTRODUCE FUNCTION:\n" << std::endl;
	tim.introduce();
	joe.introduce();
	tim2.introduce();
	
	tim = tim3;
	tim.introduce();

	std::cout << "\nDestructor\n" << std::endl; 

	return(0);
}