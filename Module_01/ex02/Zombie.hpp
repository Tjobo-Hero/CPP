/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 12:56:44 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 14:50:34 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <string>
#include <iostream>

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
