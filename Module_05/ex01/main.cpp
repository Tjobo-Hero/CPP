/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 13:41:03 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/09 14:41:33 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int			main(void)
{
	Bureaucrat tim("Tim", 120);
	Bureaucrat tjobo("Tjobo", 140);

		
	std::cout << "----Creating a form with a Sign grade that is too high----" << std::endl;
	try
	{
		Form	form1("form1", 0, 130);
		std::cout << form1 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n----Creating a form with a Sign grade that is too low----" << std::endl;
	try
	{
		Form	form1("form1", 160, 130);
		std::cout << form1 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----Creating a form with a Executable grade that is too high----" << std::endl;
	try
	{
		Form	form1("form1", 120, 0);
		std::cout << form1 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n----Creating a form with a Executable grade that is too low----" << std::endl;
	try
	{
		Form	form1("form1", 120, 160);
		std::cout << form1 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n----Creating a form with a Bureaucrat being able to sign it----" << std::endl;
	try
	{
		Form	form1("form1", 130, 120);
		
		std::cout << form1 << std::endl;
		std::cout << tim << std::endl;
		
		form1.beSigned(tim);
		std::cout << form1 << std::endl;
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----Creating a form with a Bureaucrat not being able to sign it----" << std::endl;
	try
	{
		Form	form1("form1", 110, 120);
		
		std::cout << form1 << std::endl;
		std::cout << tim << std::endl;
		
		form1.beSigned(tim);
		std::cout << form1 << std::endl;
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----Now trying to increment the Bureaucrat so he can sign it----" << std::endl;
	try
	{
		Bureaucrat tim2(tim);
		Form	form1("form1", 110, 120);
		Form	form2(form1);

		std::cout << form2;
		
		std::cout << tim;
		tim.incrementGrade();
		tim.incrementGrade();
		tim.incrementGrade();
		tim.incrementGrade();
		tim.incrementGrade();
		tim.incrementGrade();
		tim.incrementGrade();
		tim.incrementGrade();
		tim.incrementGrade();
		tim.incrementGrade();
		tim.incrementGrade();
		std::cout << tim << std::endl;

		std::cout << form1 << std::endl;
		
		form1.beSigned(tim);
		form1.beSigned(tim2);
		std::cout << form1 << std::endl;
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----Copy constructor Form----" << std::endl;
	{
		Form	form1("form1", 110, 120);
		Form	form2(form1);
		std::cout << form1;
		std::cout << form2;
	}
	std::cout << "\n----Assignation----" << std::endl;
	{
		Form	taxes("Taxes", 130, 11);
		Form	permit("Permit", 1, 1);
		
		std::cout << taxes;
		std::cout << permit;
		taxes.beSigned(tim);
		
		permit = taxes;
		
		std::cout << permit;
	}
	return (0);

}