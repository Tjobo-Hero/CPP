/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/09 12:42:04 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/09 14:17:54 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("[Form]"), _signed(false), _signGrade(120), _execGrade(110)
{
	std::cout << "Default form created with, Name: " << this->_name << ", Sign Grade: " << this->_signGrade << ", Execute Grade: " << this->_execGrade << ", Signed: " << this->_signed << std::endl;
	return;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name('[' + name + ']'), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form created with the following attributes, Name: " << this->_name;
	std::cout << ", Sign Grade: " << this->_signGrade << ", Execute Grade: " << this->_execGrade;
	std::cout << ", Signed: false" << std::endl;
	return;
}

Form::~Form(void)
{
	std::cout << "Form Destructed" << std::endl;
	return;
}

Form::Form(Form const &src) : _name(src.getName()), _signed(src.getSigned()), _signGrade(src.getSignGrade()), _execGrade(src.getExecuteGrade())
{
	*this = src;
	return;
}

Form&		Form::operator=(Form const &obj)
{
	this->_signed = obj._signed;
	return *this;
}

std::string const&		Form::getName(void) const
{
	return this->_name;
}

int						Form::getSignGrade(void) const
{
	return this->_signGrade;
}

int						Form::getExecuteGrade(void) const
{
	return this->_execGrade;
}

bool					Form::getSigned(void) const
{
	return this->_signed;
}

void					Form::beSigned(Bureaucrat const &bureaucrat)
{
	if(bureaucrat.getGrade() > this->getSignGrade())
	{
		bureaucrat.signForm(*this);
		throw Form::GradeTooLowException();
	}
	else
	{
		this->_signed = true;
		bureaucrat.signForm(*this);
	}
	return;
}

const char*				Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High Exception is thrown because, well you guessed it, the grade is too HIGH";
}

const char*				Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low High Exception is thrown because, well you guessed it, the grade is too LOW";
}

std::ostream&			operator<<(std::ostream &o, Form const &form)
{
	o << "Form name: " << form.getName() << ", with Sign Grade: ";
	o << form.getSignGrade() << ", Execute Grade: " << form.getExecuteGrade();
	o << ", Signed: ";
	if(form.getSigned())
		std::cout << "[true]" << std::endl;
	else
		std::cout << "[false]" << std::endl;
	return o;
}