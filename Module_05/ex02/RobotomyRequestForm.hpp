/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 15:53:18 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 13:23:52 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class RobotomyRequestForm : public AForm
{
	private:

		std::string		_target;

	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm&		operator=(RobotomyRequestForm const &obj);
		void						execute(Bureaucrat const &bureaucrat) const;
		std::string	const&			getTarget(void) const;
};

#endif
