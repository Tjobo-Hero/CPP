/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:59 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/28 11:05:55 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string>


class SuperMutant : public Enemy
{
	public:

		SuperMutant(void);
		virtual ~SuperMutant(void);
		SuperMutant(SuperMutant const &src);
		SuperMutant&			operator=(SuperMutant const &obj);
		std::string		getType(void) const ;
		int				getHP(void) const;
		virtual void	takeDamage(int);
};

#endif