/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:15:03 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 11:23:09 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
private:
	
	std::string	_language;
	std::string	_brainAddress;
	int			_age;
	int			_size;
	int			_memory;
	int			_sleep;
	
public:
	
	Brain(void);
	~Brain(void);
	
	std::string		identify(void) const;
};
#endif
