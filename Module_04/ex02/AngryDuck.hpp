/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AngryDuck.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 13:25:20 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/02 13:28:20 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANGRYDUCK_HPP
# define ANGRYDUCK_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class AngryDuck : public ISpaceMarine
{
	public:
		AngryDuck(void);
		AngryDuck(AngryDuck const &src);
		virtual ~AngryDuck(void);
		AngryDuck* 		clone(void) const;
		AngryDuck&		operator=(AngryDuck const &obj);
		void				battleCry(void) const;
		void				rangedAttack(void) const;
		void				meleeAttack(void) const;
};

#endif
