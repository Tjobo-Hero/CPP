/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:15:03 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/19 12:30:52 by timvancitte   ########   odam.nl         */
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
	int			_age;
	int			_size;
	int			_memory;
	int			_sleep;
	
public:
	
	Brain(void);
	~Brain(void);
	
	const Brain*	identify(void) const;
};
#endif
