/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 12:35:25 by timvancitte   #+#    #+#                 */
/*   Updated: 2020/12/14 12:52:27 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
# define _PONY_HPP_

#include <string>
#include <iostream>
#include <sstream>

class Pony
{
private:
	std::string 	name;
	std::string		color;
	std::string		gender;
	int				age;


public:
	void		ponyOnTheStack();
	void		ponyOnTheHeap();		
};
#endif