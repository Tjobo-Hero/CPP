/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:59 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/01 15:14:54 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &src);
		virtual ~TacticalMarine(void);
		TacticalMarine* 		clone(void) const;
		TacticalMarine&		operator=(TacticalMarine const &obj);
		void				battleCry(void) const;
		void				rangedAttack(void) const;
		void				meleeAttack(void) const;
};

#endif
