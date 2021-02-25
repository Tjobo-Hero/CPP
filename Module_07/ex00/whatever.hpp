/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 14:04:51 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/25 16:23:53 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>
#include <string>

template< typename T >								
T		max(T const &first, T const &second)	
{
	return ((first > second) ? first : second);
}

template< typename T >
T		min(T  const &first, T const &second)
{
	return ((first < second ) ? first : second);
}

template< typename T >
void	swap(T &first, T &second)
{
	T tmp = first;

	first = second;
	second = tmp;
	return;	
}

#endif
