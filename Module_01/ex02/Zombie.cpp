/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 12:56:42 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/18 10:51:49 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name, std::string Type) : _name(Name), _type(Type)
{
	return;
}

Zombie::~Zombie()
{
	return;
}

void	Zombie::announce() const
{
	std::cout << "<" << _name << " (" << _type << ")" << ">" << " Braiiiiiiinnnssss..." << std::endl;
}
