/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 15:17:22 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/23 15:42:15 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template< typename T >									// Template definition
T	const&	max(T const &first, T const &second)	
{
	return ((first > second) ? first : second);
}

template< typename T >
T const&	min(T const &first, T const &second)
{
	return ((first < second ) ? first : second);
}

template< typename T >
void	swap(T &x, T &y)
{
	T tmp = y;

	y = x;
	x = tmp;
	return;	
}

#endif

