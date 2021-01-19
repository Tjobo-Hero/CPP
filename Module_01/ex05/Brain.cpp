/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:14:58 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/19 12:30:26 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) 
{
	std::cout << "Constructor called" << std::endl;

	_language	= "English";
	_age 		= 10;
	_size		= 100;
	_memory		= 100000;
	_sleep		= 7;
	
	return;
}

Brain::~Brain(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

const Brain*	Brain::identify(void) const
{
	return	this;
}
