/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:34:26 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/04 12:32:30 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Water.hpp"

class MateriaSource : public IMateriaSource
{
	private:

		AMateria	*_inventorySource[4];
		int			_sourceCount;
		
	public:
		
		MateriaSource(void);
		virtual ~MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		MateriaSource&		operator=(MateriaSource const &obj);
		
		void				learnMateria(AMateria *m);
		AMateria*			createMateria(std::string const &type);
};

#endif
