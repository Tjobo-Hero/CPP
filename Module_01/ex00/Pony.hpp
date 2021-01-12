/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 12:35:25 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 14:40:04 by timvancitte   ########   odam.nl         */
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
	std::string 	_name;
	std::string		_color;
	std::string		_gender;
	int				_age;

public:
	Pony();
	~Pony();
	void		ponyOnTheStack(Pony stack);
	void		ponyOnTheHeap(Pony *heap);	
	void		setName(std::string Name);
	void		setColor(std::string Color);
	void		setGender(std::string Gender);
	void		setAge(int Age);
	void		printEverything() const;
};
#endif