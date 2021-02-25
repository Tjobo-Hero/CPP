/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 14:04:51 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/25 14:06:45 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>
#include <string>

template< typename T >								
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
