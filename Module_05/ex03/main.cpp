/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 16:48:57 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 15:32:21 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int			main(void)
{
	Bureaucrat tim = Bureaucrat("Tim", 10);
	Bureaucrat president = Bureaucrat("Barack Obama", 1);
	Intern someRandomIntern = Intern();

	std::cout << "\n----Test makeForm Member Function---" << std::endl;

	AForm	*robotForm;
	AForm	*presidentForm;
	AForm	*shrubberyForm;
	AForm	*wrongNameForm;
	
	std::cout << "\n---Create Forms with intern---\n" << std::endl;
	
	robotForm = someRandomIntern.makeForm("[RobotomyRequestForm]", "Robot Form Works");
	presidentForm = someRandomIntern.makeForm("[PresidentialPardonForm]", "President Form Works");
	shrubberyForm = someRandomIntern.makeForm("[ShrubberyCreationForm]", "Shrubbery Form Works");
	wrongNameForm = someRandomIntern.makeForm("[RooooobotomyRequestForm]", "asdfs");
	
	std::cout << "\n\n----Printing Forms----\n" << std::endl;
	if (robotForm)
		std::cout << *robotForm << "Target: " << robotForm->getTarget() << std::endl;
	if (presidentForm)
		std::cout << *presidentForm << "Target: " << presidentForm->getTarget() << std::endl;
	if (shrubberyForm)
		std::cout << *shrubberyForm << "Target: " << shrubberyForm->getTarget() << std::endl;
	if (wrongNameForm)
	{
		std::cout << *wrongNameForm << "Target: " << wrongNameForm->getTarget() << std::endl;
	}
	
	std::cout << "\n\n---Signing and executing Forms created by Intern----\n" << std::endl;
	robotForm->beSigned(tim);
	robotForm->execute(tim);
	presidentForm->beSigned(president);
	president.executeForm(*presidentForm);
	shrubberyForm->beSigned(tim);
	tim.executeForm(*shrubberyForm);
	
	std::cout << "\n\n---Destructor----" << std::endl;
	
	delete presidentForm;
	delete shrubberyForm;
	delete robotForm;
	
	return(0);
}