/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 12:35:25 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/18 10:28:59 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>
#include <sstream>

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