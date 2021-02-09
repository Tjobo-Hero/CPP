/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 11:45:20 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/09 12:34:58 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int			main(void)
{
	std::cout << "----Creating a Bureaucrat with a grade too low----" << std::endl;
	try
	{
		Bureaucrat tim("Tim", 151);
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----Creating a Bureaucrat with a grade too high----" << std::endl;
	try
	{
		Bureaucrat tjobo("Tjobo", 0);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----Creating a Bureaucrat and increment it too high----" << std::endl;
	try
	{
		Bureaucrat tjobo("Tjobo", 1);

		std::cout << tjobo << std::endl;
		tjobo.incrementGrade();
		std::cout << tjobo << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----Creating a Bureaucrat and decrement it too low----" << std::endl;
	try
	{
		Bureaucrat hero("Hero", 150);

		std::cout << hero << std::endl;
		hero.decrementGrade();
		std::cout << hero << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n----Creating a Bureaucrat and increment it----" << std::endl;
	try
	{
		Bureaucrat kay("Kay", 10);

		std::cout << kay << std::endl;
		kay.incrementGrade();
		std::cout << kay << std::endl;
		kay.incrementGrade();
		std::cout << kay << std::endl;
		kay.incrementGrade();
		std::cout << kay << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
		std::cout << "\n----Creating a Bureaucrat and decrement it----" << std::endl;
	try
	{
		Bureaucrat yuzu("Yuzu", 10);

		std::cout << yuzu << std::endl;
		yuzu.decrementGrade();
		std::cout << yuzu << std::endl;
		yuzu.decrementGrade();
		std::cout << yuzu << std::endl;
		yuzu.decrementGrade();
		std::cout << yuzu << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}