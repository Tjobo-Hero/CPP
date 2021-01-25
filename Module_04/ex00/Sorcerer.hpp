/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 16:07:08 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/25 16:49:21 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>

class Sorcerer
{
	private:

		std::string _name;
		std::string _title;
		Sorcerer(void);

	public:

		Sorcerer(std::string &Name, std::string &Title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer(void);
		Sorcerer&			operator=(Sorcerer const &rhs);
		std::string			getName(void) const;
		std::string			getTitle(void) const;
		void				introduce(void) const;
};

std::ostream&		operator<<(std::ostream &o, Sorcerer const &i);

#endif
