/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:15:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/19 11:13:48 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:

	const Brain	_brain;

public:

	Human(void);
	~Human(void);

	const Brain*	identify(void) const;
	const Brain&	getBrain(void) const;
};
#endif
