/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/10 13:50:06 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/15 10:52:00 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern created" << std::endl;
	return;
}

Intern::Intern(Intern const &src)
{
	*this = src;
	return;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructed" << std::endl;
	return;
}

Intern&			Intern::operator=(Intern const &obj)
{
	if (this != &obj)
		std::cout << "Assignation but not much to do here" << std::endl;
	return *this;
}

AForm*			Intern::makeForm(std::string formType, std::string target)
{
	AForm	*returnForm = NULL;
	AForm	*allForms[3];

	allForms[0] = new PresidentialPardonForm(target);
	allForms[1] = new ShrubberyCreationForm(target);
	allForms[2] = new RobotomyRequestForm(target);

	for (int i = 0; i < 3; i++)
	{
		if(formType == allForms[i]->getName())
		{
			returnForm = allForms[i];
			std::cout << "Intern creates the following Form: " << returnForm->getName() << std::endl;
		}
		else
			delete allForms[i];
	}
	if (returnForm == NULL)
		std::cout << "Sorry our Intern could not create a Form for you. Please check the Form names with the getName() function." << std::endl;
	return returnForm;
}
