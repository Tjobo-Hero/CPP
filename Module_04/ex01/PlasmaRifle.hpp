/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:44 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/26 15:36:57 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:

		PlasmaRifle(void);
		virtual ~PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &src);
		PlasmaRifle&		operator=(PlasmaRifle const &obj);
		virtual void		attack(void) const;
};

#endif
