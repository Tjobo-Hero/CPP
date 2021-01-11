/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 15:09:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/11 15:21:49 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name, std::string Type)
{
	name = Name;
	type = Type;
	return ;
}
Zombie::~Zombie()
{
	return ;
}

void	Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")" << ">" << " Braiiiiiiinnnssss..." << std::endl;
}