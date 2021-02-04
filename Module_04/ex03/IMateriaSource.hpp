/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:34:19 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 12:37:05 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:

		virtual ~IMateriaSource(void){}
		virtual void		learnMateria(AMateria *m) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;
};

#endif
