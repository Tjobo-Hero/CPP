/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:44 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/01 15:14:46 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class AssaultTerminator : public ISpaceMarine
{
	public:

		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &src);
		virtual ~AssaultTerminator(void);
		AssaultTerminator* 			clone(void) const;
		AssaultTerminator&		operator=(AssaultTerminator const &obj);
		void					battleCry(void) const;
		void					rangedAttack(void) const;
		void					meleeAttack(void) const;
};

#endif