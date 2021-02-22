/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/22 13:16:40 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/22 14:39:55 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>

class Base
{
	public:

		virtual ~Base(void) 
		{
			std::cout << "Destructor called" << std::endl;
			return;
		}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
