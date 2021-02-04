/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:34:00 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 15:20:51 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter
{
	private:

		std::string		_name;
		AMateria*		_inventory[4];
		int				_count;

		Character(void);
		
	public:
		Character(std::string const &name);
		Character(Character const &src);
		virtual ~Character(void);
		
		Character&			operator=(Character const &obj);
		std::string const&	getName(void) const;
		virtual void		equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
		void				printInventory(void) const;
		AMateria*			getMateria(int index);
};

#endif
