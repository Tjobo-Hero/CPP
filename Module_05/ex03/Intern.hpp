/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/10 13:50:11 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 14:48:30 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>

class AForm;

class Intern
{
	public:

		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern&		operator=(Intern const &obj);
		AForm*		makeForm(std::string formType, std::string target);
};

#endif