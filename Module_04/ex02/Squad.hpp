/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:54 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/01 15:59:40 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	private:
	
	typedef struct			s_list
	{
		ISpaceMarine		*_marine;
		struct s_list		*_next;
	}						t_list;
	t_list			*_head;
	int				_index;
		
	public:

		Squad(void);
		Squad(Squad const &src);
		virtual ~Squad(void);
		void			copyFunction(Squad const &obj);
		void			deleteListFunction(void);
		Squad&			operator=(Squad const &obj);
		int 			getCount(void) const;
		ISpaceMarine*	getUnit(int n) const;
		int				push(ISpaceMarine* marinePtr);
};

#endif
