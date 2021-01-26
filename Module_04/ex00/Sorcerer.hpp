/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:07:08 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/26 12:45:08 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	private:

		std::string _name;
		std::string _title;
		Sorcerer(void);

	public:

		Sorcerer(std::string const &Name, std::string const &Title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer(void);
		Sorcerer&			operator=(Sorcerer const &obj);
		std::string			getName(void) const;
		std::string			getTitle(void) const;
		void				introduce(void) const;
		void				polymorph(Victim const &other) const;
};

std::ostream&		operator<<(std::ostream &o, Sorcerer const &sorcerer);

#endif
