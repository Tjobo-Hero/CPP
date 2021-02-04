/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:34:24 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 15:31:23 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "New MateriaSource created" << std::endl;
	for(int i = 0; i <= 4; i++)
		this->_inventorySource[i] = NULL;
	return;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
	return;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		delete this->_inventorySource[i];
	return;
}

MateriaSource&		MateriaSource::operator=(MateriaSource const &obj)
{
	if(this != &obj)
	{
		for(int i = 0; i < 4; i++)
		{
			this->_inventorySource[i] = obj._inventorySource[i];
			this->_sourceCount++;
		}
	}
	return *this;
}

void				MateriaSource::learnMateria(AMateria *m)
{
	if(!m)
		std::cout << "Please send valid materia" << std::endl;
	else if (this->_sourceCount == 4)
	{
		std::cout << "Inventory of Source Materia is full" << std::endl;
		delete m;
	}
	else
	{
		this->_inventorySource[this->_sourceCount] = m;
		std::cout << m->getType() << " was added to the Materia Source inventory" << std::endl;
		std::cout << "Inventory Source count is now: " << this->_sourceCount << std::endl;
		this->_sourceCount++;
	}
	return;
}

AMateria*			MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < this->_sourceCount; i++)
	{
		if (this->_inventorySource[i]->getType() == type)
		{
			std::cout << type << " materia was created" << std::endl;
			return this->_inventorySource[i]->clone();
		}
	}
	std::cout << "This " << type << " is not in the inventory. No type created" << std::endl;
	return NULL;
}
