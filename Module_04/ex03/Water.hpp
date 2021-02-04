/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Water.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 11:41:11 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 13:57:23 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WATER_HPP
# define WATER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Water : public AMateria
{
	public:

		Water(void);
		Water(Water const &src);
		virtual ~Water(void);
		Water&				operator=(Water const &obj);
		std::string const& 	getType() const;
		unsigned int 		getXP(void) const;
		
		virtual Water*	clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
