/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:15:05 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 11:21:35 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Human::~Human(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Brain			Human::getBrain(void) const
{
	return this->_brain;
}

std::string		Human::identify(void) const
{
	return this->_brain.identify();
}
