/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 12:35:25 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/11 12:03:44 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
# define _PONY_HPP_

#include <string>
#include <iostream>
#include <sstream>
#include <new>

class Pony
{
private:
	std::string 	name;
	std::string		color;
	std::string		gender;
	int				age;

public:
	Pony();
	~Pony();
	void		ponyOnTheStack(Pony stack);
	void		ponyOnTheHeap(Pony *heap);	
	void		initiateName(std::string Name);
	void		initiateColor(std::string Color);
	void		initiateGender(std::string Gender);
	void		initiateAge(int Age);
	void		printEverything();
};
#endif