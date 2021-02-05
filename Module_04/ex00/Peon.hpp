/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:07:03 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 12:02:16 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	private:

		Peon(void);
			
	public:

		Peon(std::string const &Name);
		Peon(Peon const &src);
		virtual ~Peon(void);
		Peon&				operator=(Peon const &obj);
		void				getPolymorphed(void) const;
};

std::ostream&		operator<<(std::ostream& o, Peon const &Peon);

#endif
