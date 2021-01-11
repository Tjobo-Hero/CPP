/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 12:56:44 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/11 15:02:24 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string type;
	std::string name;
	
public:
	Zombie(std::string, std::string);
	~Zombie();
	void announce();
};
#endif
