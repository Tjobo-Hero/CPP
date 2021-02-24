/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 15:17:22 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/24 11:23:32 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>
#include <string>

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

