/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:07:13 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/25 17:00:52 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{

	private:

		std::string		_name;
		Victim(void);
			
	public:

		Victim(std::string &Name);
		Victim(Victim const &src);
		~Victim(void);
		Victim&				operator=(Victim const &rhs);
		std::string			getName(void) const;
		void				introduce(void) const;
		
};

#endif
