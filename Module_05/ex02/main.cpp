/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 16:48:57 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/09 17:19:07 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int			main(void)
{
	Bureaucrat tim("Tim", 10);
	Form *shubbery = new ShrubberyCreationForm("thisworks");
	
	try
	{
		std::cout << *shubbery << std::endl;
		shubbery->beSigned(tim);
		shubbery->execute(tim);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}