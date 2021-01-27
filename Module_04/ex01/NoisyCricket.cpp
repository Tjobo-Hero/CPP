/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NoisyCricket.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 13:28:56 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 15:01:37 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "NoisyCricket.hpp"

NoisyCricket::NoisyCricket(void) : AWeapon("Noisy Cricket (from the Men in Black movie)", 12, 60)
{
	return;
}

NoisyCricket::~NoisyCricket(void)
{
	return;
}

NoisyCricket::NoisyCricket(NoisyCricket const &src) : AWeapon(src)
{
	*this = src;
	return;
}

NoisyCricket&		NoisyCricket::operator=(NoisyCricket const &obj)
{
	if(this != &obj)
	{
		this->_name = obj._name;
		this->_apcost = obj._apcost;
		this->_damage = obj._damage;
	}
	return *this;
}

void		NoisyCricket::attack(void) const
{
	std::cout << "* crickets chirp..... BOOOOOOOOOOM *" << std::endl;
	return;
}