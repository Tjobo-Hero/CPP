/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:54 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 14:33:31 by timvancitte   ########   odam.nl         */
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
		Squad(ISquad const &src);
		virtual ~Squad(void);
		void			deleteListFunction(void);
		Squad&			operator=(Squad const &obj);
		Squad&			operator=(ISquad const &obj);
		int 			getCount(void) const;
		ISpaceMarine*	getUnit(int n) const;
		int				push(ISpaceMarine* marinePtr);
};

#endif
