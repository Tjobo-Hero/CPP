/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Prey.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 13:49:37 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/26 14:23:20 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef PREY_HPP
# define PREY_HPP

#include "Victim.hpp"

class Prey : public Victim
{
	private:

		Prey(void);
			
	public:

		Prey(std::string const &Name);
		Prey(Prey const &src);
		virtual ~Prey(void);
		Prey&						operator=(Prey const &obj);
		virtual void				getPolymorphed(void) const;
};

#endif
