/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 12:56:42 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/11 15:04:48 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _Name, std::string _Type)
{
	name = _Name;
	type = _Type;
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
