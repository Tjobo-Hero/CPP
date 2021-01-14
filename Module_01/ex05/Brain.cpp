/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:14:58 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 11:27:15 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) 
{
	std::cout << "Constructor called" << std::endl;
	
	std::stringstream	addressStr;
	
	addressStr << this;
	addressStr >> _brainAddress;
	
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

std::string		Brain::identify(void) const
{
	return	this->_brainAddress;
}
