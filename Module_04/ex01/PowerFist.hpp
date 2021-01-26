/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:49 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/26 15:36:52 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:

		PowerFist(void);
		virtual ~PowerFist(void);
		PowerFist(PowerFist const &src);
		PowerFist&		operator=(PowerFist const &obj);
		virtual void		attack(void) const;
};

#endif