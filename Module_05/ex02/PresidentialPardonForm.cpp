/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 15:53:06 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 13:44:48 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm("PresidentialPardonForm", 25, 5), _target(src._target)
{
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Presidential Pardon Form destructed." << std::endl;
	return;
}

PresidentialPardonForm&		PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return *this;
}

std::string	const&			PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

void						PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowTooExecute();
	else if (this->getSigned() == false)
		throw AForm::FormNotSigned();
	else
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return;
}
