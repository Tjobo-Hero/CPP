/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 12:12:46 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/01 12:29:26 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
	public:

		virtual ~ISpaceMarine(void) {}
		virtual ISpaceMarine* clone(void) const = 0;
		virtual void	battleCry(void) const = 0;
		virtual void	rangedAttack(void) const = 0;
		virtual void	meleeAttack(void) const = 0;
};

#endif
