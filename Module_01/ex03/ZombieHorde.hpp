/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 15:09:18 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/13 12:17:13 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>
#include <string>

class ZombieHorde
{
private:
	
	int			_index;
	Zombie*		_allZombies;
	
public:
	
	ZombieHorde(int N);
	~ZombieHorde(void);
	
	void	changeType(void);
	void	announce(void) const;
};

#endif