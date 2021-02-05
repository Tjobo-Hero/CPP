/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:33:58 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 14:49:05 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _count(0)
{
	std::cout << "New character " << this->_name << " was created" << std::endl;
	for(int i = 0; i <= 4; i++)
		_inventory[i] = NULL;
	return;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for(int i = 0; i < this->_count; i++)
			delete this->_inventory[i];
	return;
}

Character::Character(Character const &src)
{
	*this = src;
	return;
}

std::string	const&	Character::getName(void) const
{
	return this->_name;
}

Character&			Character::operator=(Character const &obj)
{
	std::cout << "Character Assignation operator called" << std::endl;
	if(this != &obj)
	{
		for(int i = 0; i < this->_count; i++)
			delete this->_inventory[i];
		this->_name = obj.getName();
		this->_count = obj._count;
		for(this->_count = 0; this->_count != obj._count ; this->_count++)
			this->_inventory[this->_count] = obj._inventory[this->_count]->clone();
	}
	return *this;
}

void			Character::equip(AMateria *m)
{
	if(!m)
		std::cout << "Please send a Materia to add" << std::endl;
	else if (this->_count == 4)
	{
		std::cout << "Inventory of this Character is already full.\n" << std::endl;
		delete m;
	}
	else
	{
		this->_inventory[this->_count] = m;
		std::cout << "Materia " << m->getType() << " has been added to the Character inventory on slot [" << this->_count << "]" << std::endl;
		std::cout << "Character inventory count is now: " << this->_count << std::endl;
		this->_count++;
	}
	return;
}

void			Character::unequip(int idx)
{
	if(idx < 0 || idx >= this->_count || idx > 4)
	{
		std::cout << "Please enter a valid number" <<std::endl;
		return;
	}
	for(int i = idx; i < this->_count; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
	}
	this->_count -= 1;
	return;
	
}
void			Character::printInventory(void) const
{
	std::cout << "\nInventory of " << this->_name << std::endl;
	for(int i = 0; i < this->_count; i++)
		std::cout << "Slot [" << i << "] has type: [" << this->_inventory[i]->getType() << "]" << std::endl;
	return;
}

AMateria*			Character::getMateria(int index)
{
	return this->_inventory[index];
}

void			Character::use(int idx, ICharacter &target)
{
	if(idx < 0 || idx >= this->_count || idx > 4 || this->_inventory[idx] == NULL)
		return;
	this->_inventory[idx]->use(target);
	std::cout << "XP is now: " << this->_inventory[idx]->getXP() << std::endl;
	return;
}