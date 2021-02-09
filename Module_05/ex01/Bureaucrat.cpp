/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 11:45:16 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/09 14:17:21 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name('[' + name + ']')
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	
	std::cout << "Bureaucrat created: " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Copy Constructor Bureaucrat called" << std::endl;
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructed" << std::endl;
	return;
}

Bureaucrat&				Bureaucrat::operator=(Bureaucrat const &obj)
{
	std::cout << "Assignation member function called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_grade = obj._grade;
	}
	return *this;
}

std::string const&		Bureaucrat::getName(void) const
{
	return this->_name;
}

int						Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void				Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
	return;
}

void				Bureaucrat::decrementGrade(void)
{
	if(this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
	return;
}

void				Bureaucrat::signForm(Form const &form) const
{
	if (this->getGrade() <= form.getSignGrade())
		std::cout << this->getName() << " succesfully signed form: " << form.getName() << std::endl;
	else
	{
		std::cout << this->getName() <<" could not sign the form " << form.getName();
		std::cout << ". The grade is too low." << " Bureaucrats grade is: " << this->getGrade();
		std::cout << ", minimum grade needed to sign this form: " << form.getSignGrade() << std::endl;
	}
	return;
}

const char*				Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High Exception is thrown because, well you guessed it, the grade is too HIGH";
}

const char*				Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low High Exception is thrown because, well you guessed it, the grade is too LOW";
}

std::ostream&			operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
	o << "Bureaucrat name: " << bureaucrat.getName();
	o << ", with grade " << bureaucrat.getGrade() << "." << std::endl;
	return o;
}
