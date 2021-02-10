/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 15:53:14 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 13:23:40 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class PresidentialPardonForm : public AForm
{
	private:

		std::string		_target;

	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm&		operator=(PresidentialPardonForm const &obj);
		void						execute(Bureaucrat const &bureaucrat) const;
		std::string	const&			getTarget(void) const;
};

#endif
