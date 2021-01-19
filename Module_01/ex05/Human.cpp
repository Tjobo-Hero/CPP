/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:15:05 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/19 11:17:40 by timvancitte   ########   odam.nl         */
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

const Brain&			Human::getBrain(void) const
{
	return this->_brain;
}

const Brain*		Human::identify(void) const
{
	return this->_brain.identify();
}
