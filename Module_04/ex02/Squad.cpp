/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:52 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/02 13:21:28 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad(void) : _head(NULL), _index(0) 
{
	return;
}

Squad::Squad(Squad const &src)
{
	*this = src;
	return;
}

Squad::~Squad(void)
{
	deleteListFunction();
	return;
}

void			Squad::deleteListFunction(void)
{
	t_list *tmp;

	if(_head)
	{
		for(;this->_head; this->_head = tmp)
		{
			tmp = this->_head->_next;
			delete this->_head->_marine;
			delete this->_head;
		}
	}
}

Squad&			Squad::operator=(Squad const &obj)
{
	if(this != &obj)
	{	
		this->_index = 0;
		deleteListFunction();
		t_list *tmp = obj._head;
		for(; tmp; tmp = tmp->_next)
			this->push(tmp->_marine->clone());
	}	
	return *this;
}

int				Squad::getCount(void) const
{
	return this->_index;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	t_list *tmp;

	
	if(n < 0 || n >= this->_index)
	{
		std::cout << "Please enter a valid unit number." << std::endl;
		return NULL;
	}
	tmp = this->_head;
	while(n)
	{
		tmp = tmp->_next;
		n--;
	}
	return tmp->_marine;
}

int				Squad::push(ISpaceMarine* marinePtr)
{
	
	if(marinePtr == NULL)
	{
		std::cout << "Please enter a valid Space Marine this one is equal to NULL" << std::endl;
		return (this->_index);
	}
	t_list *tmp = this->_head;
	if(this->_head != NULL)
	{
		while(tmp->_next)
		{
			if(marinePtr == tmp->_marine || marinePtr == tmp->_next->_marine)
			{
				std::cout << "This unit already exists in the squad." << std::endl;
				return this->_index;
			}
			tmp = tmp->_next;
		}
		tmp->_next = new t_list;
		tmp->_next->_marine = marinePtr;
		tmp->_next->_next = NULL;
	}
	else
	{
		this->_head = new t_list;
		this->_head->_marine = marinePtr;
		this->_head->_next = NULL;
	}
	this->_index++;
	return this->_index;
}
