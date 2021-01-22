/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 09:53:10 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/22 13:31:10 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class NinjaTrap;

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
	
public:

	SuperTrap(void);
	SuperTrap(std::string Name);
	SuperTrap(SuperTrap const &src);
	virtual ~SuperTrap(void);

	SuperTrap&			operator=(SuperTrap const &other);
	void				rangedAttack(std::string const &target);
	void				meleeAttack(std::string const &target);
	void				printValues(void) const;
};

#endif