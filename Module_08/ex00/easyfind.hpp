/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 17:08:51 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/25 17:26:57 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>

class notFoundException : public std::exception
{
	virtual const char*	what() const throw(){
		return "Could not find element";
	}
};

template< typename T>
typename T::iterator		easyfind(T &element, int n)
{
	typename T::iterator	it;

	it = std::find(element.begin(), element.end(), n);
	if (it != element.end())
		std::cout << "Element has been found: " << *it << std::endl;
	else
		throw notFoundException();
	return (it);	
}


#endif