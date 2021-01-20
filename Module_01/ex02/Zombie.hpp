/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 12:56:44 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/20 10:38:43 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Zombie
{
private:

	std::string _name;
	std::string _type;
	
public:

	Zombie(std::string Name, std::string Type);
	~Zombie();
	void announce() const;
};
#endif
