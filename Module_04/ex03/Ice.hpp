/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:34:14 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 13:57:02 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
	public:

		Ice(void);
		Ice(Ice const &src);
		virtual ~Ice(void);
		Ice&				operator=(Ice const &obj);
		std::string const& 	getType() const;
		unsigned int 		getXP(void) const;
		
		virtual Ice*		clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
