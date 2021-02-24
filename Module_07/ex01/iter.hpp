/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 10:31:00 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/24 15:32:55 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template< typename T >
void	print(T obj)
{
	std::cout << obj;
	return;
}

template< typename T >
void	iter(T* arraddr, const size_t length, void func(T obj))
{
	for (size_t i = 0; i < length; i++)
		func(arraddr[i]);
	std::cout << std::endl;
	return;
}

#endif
