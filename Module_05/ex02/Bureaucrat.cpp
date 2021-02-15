/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 11:45:16 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/15 14:56:08 by timvancitte   ########   odam.nl         */
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

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()), _grade(src.getGrade())
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
		this->_grade = obj._grade;
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

void				Bureaucrat::signForm(AForm const &form) const
{
	if (this->getGrade() <= form.getSignGrade())
		std::cout << "Bureucrat: " << this->_name << "(Grade: " << this->getGrade() << ") has signed the following form: " << form.getName() << "(s.grade: " << form.getSignGrade() << ", ex.grade: " << form.getExecuteGrade() << ")" << std::endl;
	else
	{
		std::cout << this->getName() <<" could not sign the form " << form.getName();
		std::cout << ". The grade is too low." << " Bureaucrats grade is: " << this->getGrade();
		std::cout << ", minimum grade needed to sign this form: " << form.getSignGrade() << std::endl;
	}
	return;
}

void				Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << "Bureucrat: " << this->_name << "(Grade: " << this->getGrade() << ") has executed the following form: " << form.getName() << "(s.grade: " << form.getSignGrade() << ", ex.grade: " << form.getExecuteGrade() << ")" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " could not execute the form because: \n" << e.what() << std::endl;
	}
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
