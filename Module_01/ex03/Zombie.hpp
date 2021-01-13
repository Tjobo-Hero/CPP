/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 15:09:11 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/13 11:32:16 by timvancitte   ########   odam.nl         */
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

	Zombie(void);
	Zombie(std::string, std::string);
	~Zombie();
	
	void		announce(void);
	void	changeType(void);
	void	randomChump(void);
};
#endif
