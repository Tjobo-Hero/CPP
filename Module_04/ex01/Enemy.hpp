/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 14:45:04 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 13:16:49 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	private:
		
		Enemy(void);
		
	protected:

		int				_hp;			
		std::string		_type;

	public:

		virtual ~Enemy(void);
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &src);
		Enemy&			operator=(Enemy const &obj);
		std::string		getType(void) const ;
		int				getHP(void) const;
		virtual void	takeDamage(int damage);
};

#endif
