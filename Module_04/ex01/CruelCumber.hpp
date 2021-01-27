/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CruelCumber.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 13:36:29 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/27 13:55:13 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CRUELCUMBER_HPP
# define CRUELCUMBER_HPP

class CruelCumber : public Enemy

{
	private:

		int 	_damageReduction = 6;
	
	public:

		CruelCumber(void);
		virtual ~CruelCumber(void);
		CruelCumber(CruelCumber const &src);
		CruelCumber&			operator=(CruelCumber const &obj);
		std::string		getType(void) const ;
		int				getHP(void) const;
		virtual void	takeDamage(int);
};

#endif