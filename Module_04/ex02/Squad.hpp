/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:54 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/28 13:44:47 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
	
		int		_count;
		
	public:

		Squad(void);
		Squad(Squad const &src);
		virtual ~Squad(void);
		Squad&					operator=(Squad const &obj);
		virtual int 			getCount(void) const;
		virtual ISpaceMarine*	getUnit(int index) const;
		virtual int				push(ISpaceMarine *obj);
};

#endif
