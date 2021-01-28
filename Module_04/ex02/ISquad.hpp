/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:39 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/28 13:23:41 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class ISqaud
{
	public:

		virtual ~ISquad(void) {}
		virtual int 			getCount(void) const;
		virtual ISpaceMarine*	getUnit(int index) const = 0;
		virtual int				push(ISpaceMarine *obj) = 0;
		
};

#endif

