/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:53 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 13:53:52 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string>


class RadScorpion : public Enemy
{
	public:

		RadScorpion(void);
		virtual ~RadScorpion(void);
		RadScorpion(RadScorpion const &src);
		RadScorpion&			operator=(RadScorpion const &obj);
		std::string		getType(void) const ;
		int				getHP(void) const;
		virtual void	takeDamage(int);
};

#endif