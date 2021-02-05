/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:07:13 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/05 10:47:42 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{

	private:

		Victim(void);
		
	protected:
			
		std::string		_name;
		
	public:

		Victim(std::string const &Name);
		Victim(Victim const &src);
		virtual ~Victim(void);
		Victim&				operator=(Victim const &obj);
		std::string			getName(void) const;
		void				introduce(void) const;
		virtual void		getPolymorphed(void) const;
};

std::ostream&		operator<<(std::ostream &o, Victim const &victim);

#endif
