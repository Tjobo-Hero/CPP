/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:52 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 14:33:27 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad(void) : _head(NULL), _index(0) 
{
	return;
}

Squad::Squad(Squad const &src) : _head(NULL), _index(0)
{
	std::cout << "Squad copy constructer called" << std::endl;
	*this = src;
	return;
}

Squad::Squad(ISquad const &src) : _head(NULL), _index(0)
{
	std::cout << "ISquad copy constructor called" << std::endl;
	*this = src;
	return;
}

Squad::~Squad(void)
{
	if(this->_index)
	{
		t_list *tmp = NULL;
		
		for(;this->_head; this->_head = tmp)
		{
			tmp = this->_head->_next;
			delete this->_head->_marine;
			delete this->_head;
		}
	}
	std::cout << "Squad destructed in destructor" << std::endl;
	return;
}

Squad&			Squad::operator=(ISquad const &obj)
{
	if(this != &obj)
	{
		const ISquad* tmp2 = &obj;
		Squad *tmp1 = dynamic_cast<Squad*>(const_cast<ISquad*>(tmp2));

		Squad::operator=(*tmp1);
	}
	return *this;
}

Squad&			Squad::operator=(Squad const &obj)
{
	std::cout << "Assignation operator Squad called" << std::endl;
	if(this != &obj)
	{
		if(this->_index)
		{
			t_list *tmp = NULL;
			
			for(;this->_head; this->_head = tmp)
			{
				tmp = this->_head->_next;
				delete this->_head->_marine;
				delete this->_head;
			}
		}
		std::cout << "Squad destructed" << std::endl;
		this->_index = 0;
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

	
	if(n < 0 || n >= this->_index)
	{
		std::cout << "Please enter a valid unit number." << std::endl;
		return NULL;
	}
	else if(!this->_index)
		std::cout << "Sqaud has no members yet" << std::endl;
	else
	{
		t_list *tmp = this->_head;
		for(int i = 0; i < n; i++)
			tmp = tmp->_next;
		return tmp->_marine;
	}
	return NULL;
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
