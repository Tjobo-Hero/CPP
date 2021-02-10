/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 15:53:24 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 13:23:56 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHUBBERYCREATIONFORM_HPP
# define SHUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>
#include <string>
#include <iostream>

class ShrubberyCreationForm : public AForm
{
	private:

		std::string		_target;

	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm&		operator=(ShrubberyCreationForm const &obj);
		void						execute(Bureaucrat const &bureaucrat) const;
		std::string	const&			getTarget(void) const;
};

#endif
