/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:34:05 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 13:56:40 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
	public:

		Cure(void);
		Cure(Cure const &src);
		virtual ~Cure(void);
		Cure&			operator=(Cure const &obj);
		std::string const& 	getType() const;
		unsigned int 		getXP(void) const;
		
		virtual Cure*		clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
