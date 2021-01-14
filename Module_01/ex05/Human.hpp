/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:15:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 11:23:05 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:

	Brain	_brain;

public:

	Human(void);
	~Human(void);

	std::string	identify(void) const;
	Brain		getBrain(void) const;
};
#endif
