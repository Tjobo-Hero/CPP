/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:33:56 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 09:52:31 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	private:

		AMateria(void);

	protected:
	
		std::string		_type;
		unsigned int	_xp;
	
	public:
		
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);
		
		AMateria&			operator=(AMateria const &obj);
		std::string const& 	getType() const;
		unsigned int 		getXP(void) const;
		
		virtual	AMateria*	clone(void) const = 0;
		virtual	void		use(ICharacter &target);
};

#endif
