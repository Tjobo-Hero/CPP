/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NoisyCricket.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 13:28:59 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 13:33:28 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOISYCRICKET_HPP
# define NOISYCRICKET_HPP

#include "AWeapon.hpp"

class NoisyCricket : public AWeapon
{
	public:

		NoisyCricket(void);
		virtual ~NoisyCricket(void);
		NoisyCricket(NoisyCricket const &src);
		NoisyCricket&		operator=(NoisyCricket const &obj);
		virtual void		attack(void) const;
};
#endif
