/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 16:48:57 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/10 13:41:22 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int			main(void)
{
	Bureaucrat tim("Tim", 10);
	Bureaucrat president("Barack Obama", 1);
	ShrubberyCreationForm shrubbery1 = ShrubberyCreationForm("thisworks");
	ShrubberyCreationForm shrubbery2 = ShrubberyCreationForm("another try");
	ShrubberyCreationForm shrubbery4 = ShrubberyCreationForm("Assignation works");
	RobotomyRequestForm		robot1 = RobotomyRequestForm("Mister robot");
	RobotomyRequestForm		robot2 = RobotomyRequestForm("LADY ROBOT");
	RobotomyRequestForm		robot4 = RobotomyRequestForm("Assignation works");
	PresidentialPardonForm	presForm1 = PresidentialPardonForm("Your Mom");
	PresidentialPardonForm	presForm2 = PresidentialPardonForm("Lil Wyane");
	PresidentialPardonForm	presForm4 = PresidentialPardonForm("Assignation works");
	
	/* SHRUBBERY CREATION FORM TESTS */
	
	std::cout << "\n-----Shrubbery Creation Form basic----" << std::endl;
	try
	{
		std::cout << shrubbery1 << shrubbery2 << std::endl;
		
		shrubbery1.beSigned(tim);
		shrubbery1.execute(tim);
		tim.executeForm(shrubbery2);
		shrubbery2.beSigned(tim);
		tim.executeForm(shrubbery2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-----Shrubbery Creation Form copy constructor----" << std::endl;
	ShrubberyCreationForm shrubbery3 = ShrubberyCreationForm(shrubbery1);
		std::cout << "\n-----Shrubbery Assignation Member function----" << std::endl;
	std::cout << shrubbery3 << "Target: " << shrubbery3.getTarget() << std::endl;

	shrubbery3 = shrubbery4;
	std::cout << shrubbery3  << "Target: " << shrubbery3.getTarget() << std::endl;
	

	/* ROBOTOMY REQUEST FORM TESTS */
	std::cout << "\n-----Robotomy Request Form basic----" << std::endl;
	try
	{
		std::cout << robot1 << robot2 << std::endl;
		
		robot1.beSigned(tim);
		robot1.execute(tim);
		tim.executeForm(robot2);
		robot2.beSigned(tim);
		tim.executeForm(robot2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-----Robotomy Request Form copy constructor----" << std::endl;
	RobotomyRequestForm robot3 = RobotomyRequestForm(robot1);
	std::cout << robot3 << "Target: " << robot3.getTarget() << std::endl;
	
	std::cout << "\n-----Robotomy Request Form Assignation Member function----" << std::endl;
	std::cout << robot3 << "Target: " << robot3.getTarget() << std::endl;
	robot3 = robot4;
	std::cout << robot3  << "Target: " << robot3.getTarget() << std::endl;
	
	/* PRESIDENTIAL PARDON FORM TESTS */
	std::cout << "\n-----Presidential Pardon Form basic----" << std::endl;
	try
	{
		std::cout << presForm1 << presForm2 << std::endl;
		
		presForm1.beSigned(tim);
		presForm1.execute(president);
		president.executeForm(presForm2);
		presForm2.beSigned(tim);
		president.executeForm(presForm2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-----Presidential Pardon Form copy constructor----" << std::endl;
	PresidentialPardonForm presForm3 = PresidentialPardonForm(presForm1);
	std::cout << presForm3 << "Target: " << presForm3.getTarget() << std::endl;
	
	std::cout << "\n-----Presidential Pardon Form Assignation Member function----" << std::endl;
	std::cout << presForm3 << "Target: " << presForm3.getTarget() << std::endl;

	presForm3 = presForm4;
	std::cout << presForm3  << "Target: " << presForm3.getTarget() << std::endl;

	std::cout << "\n\n----Destructor----" << std::endl;
	
	return(0);
}