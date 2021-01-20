/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 15:09:11 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/18 10:17:58 by timvancitte   ########   odam.nl         */
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

	Zombie(void);
	Zombie(std::string, std::string);
	~Zombie();
	
	void		announce(void);
	void	changeType(void);
	void	randomChump(void);
};
#endif
