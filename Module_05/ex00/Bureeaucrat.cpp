/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureeaucrat.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 11:45:16 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/08 12:42:47 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat&				Bureaucrat::operator=(Bureaucrat const &obj)
{
	this->_name = obj._name;
	this->_grade = obj._grade;
}

/* Get and set functions */

std::string const&		Bureaucrat::getName(void) const
{
	return this->_name;
}

int						Bureacrat::getGrade(void) const
{
	return this->_grade;
}

void					Bureaucrat::setName(std::string const &name)
{
	this->_name = name;
	return;
}

void					Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
	return;
}
