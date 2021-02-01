/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:52 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/01 16:21:01 by timvancitte   ########   odam.nl         */
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
		std::cout << "TEST" << std::endl;
		while(_head->_next)
		{
			std::cout << "MEER TEST" << std::endl;
			tmp = _head;
			delete _head->_marine;
			_head = tmp->_next;
			delete tmp;
		}
		delete _head->_marine;
		delete _head;
	}
}
void			Squad::copyFunction(Squad const &obj)
{
	deleteListFunction();
	for(int i = 0; i < obj.getCount(); i++)
		push(obj.getUnit(i));
	return;
}


Squad&			Squad::operator=(Squad const &obj)
{
	if(this != &obj)
	{
		this->_index = obj._index;
		this->copyFunction(obj);
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

	
	if(n < 0 && n > this->_index)
	{
		std::cout << "Please enter a valid unit number." << std::endl;
		return NULL;
	}
	else
	{
		tmp = this->_head;
		for(; n; n--)
		{
			tmp = tmp->_next;
		}
		return tmp->_marine;
	}
	return NULL;
}

int				Squad::push(ISpaceMarine* marinePtr)
{
	t_list *new_node = new t_list;
	new_node->_marine = marinePtr;
	new_node->_next = NULL; 
	
	if(marinePtr == NULL)
	{
		std::cout << "Please enter a valid Space Marine this one is equal to NULL" << std::endl;
		delete new_node;
		return (this->_index);
	}
	if(this->_head == NULL)
	{
		this->_head = new_node;
		this->_index++;
		return this->_index;
	}
	t_list *tmp = this->_head;
	for(; tmp->_next != NULL; tmp = tmp->_next)
	{
		if(marinePtr == tmp->_marine || marinePtr == tmp->_next->_marine)
		{
			std::cout << "This unit already exists in the squad." << std::endl;
			delete new_node;
			return this->_index;
		}
	}
	if(tmp == NULL)
		tmp = new_node;
	else
		tmp->_next = new_node;
	this->_index++;
	return this->_index;
}