/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Prey.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 13:49:37 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 12:04:07 by timvancitte   ########   odam.nl         */
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
		Prey&				operator=(Prey const &obj);
		void				getPolymorphed(void) const;
};

std::ostream&		operator<<(std::ostream& o, Prey const &Prey);

#endif
